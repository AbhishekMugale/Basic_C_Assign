/* Write a program which checks whether 7th & 15th & 21st,28th bit is ON or OFF.

*/
#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL Check(UINT No)
{
// 0000	  1000	0001   0000	  0100   0000	0100	0000
//  0   	8	 1		0		4	  0	      4       0
//  08104040

   UINT Mask = 0X08104040;
   UINT Result = 0;
   
   Result = No & Mask;
   
   if(Result == Mask)
   {
      return TRUE;
   }
   else
   {
      return FALSE;
   }
   
}


int main()
{
   UINT iValue;
   int iRet = 0;
   
   printf("Enter the number\n");
   scanf("%d",&iValue);
   
   iRet = Check(iValue);
   
   if(iRet == 1)
   {
      printf("TRUE\n");
   }
   else
   {
      printf("FALSE\n");
   }
   
   return 0;
}
