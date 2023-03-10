/* Write a program which accept one number and position from user and off that bit.Return modified number.

Input  :  10   2
Output :  8

*/

#include<stdio.h>

typedef unsigned int UINT;

int OffBit(UINT No,int iPos)
{
   UINT Mask = 0X00000001;
   UINT Result = 0;
   UINT Temp = 0;
   Mask = Mask << (iPos-1);
   
   Result = No & Mask;
   
   if(Result == Mask)
   {
      Temp = No ^ Mask;
      return Temp;
   }
   else
   {
      return No;
   }
   
 
}

int main()
{
  UINT iValue = 0;
  int iRet = 0,ipos = 0;
  printf("Enter the number\n");
  scanf("%d",&iValue);
  printf("Enter the position\n");
  scanf("%d",&ipos);
  
  iRet = OffBit(iValue,ipos);
  
  printf("The modified number is %d\n",iRet);

  return 0;
}  
