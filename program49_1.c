/* Write a program which checks whether 15th bit is on or off. */

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE  1
#define FALSE 0

BOOL ChkBit(UINT No)
{
//   0000	 0000	0000	0000	0100	0000	0000	0000
     
//     00004000
     UINT Mask = 0X00004000;
     
     UINT Result=0;
     
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
   int bRet = 0;
   printf("Enter the number \n");
   scanf("%d",&iValue);
   
   bRet = ChkBit(iValue);
   if(bRet == 1)
   {
      printf("TRUE\n");
   }
   else
   {
      printf("FALSE\n");
   }

   return 0;
}
