/* Write a program which checks whether 5th and 18th bit is on or off. */

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE  1
#define FALSE 0

BOOL ChkBit(UINT No)
{
//   0000	 0000	0000	0010	0000	0000	0001	0000
     
//     00020010
     UINT Mask = 0X00020010;
     
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
