/* Write a program which accept one number from user and toggle contents of first and last nibble of the number.Return modified number.(Nibble is a group of four bits)

*/

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT No)
{
   UINT Mask1 = 0X11111111;
   UINT Mask2 = 0X11111111;
   UINT Result =0;
  
   Mask1 = Mask1 << (No-4);
   Mask2 = Mask2 >> (No-4);
   UINT Mask=0;
   Mask = Mask1 | Mask2;
   
   Result = No ^ Mask;
   return Result;
  
  
  
}
int main()
{
  UINT iValue;
  UINT iRet=0;
  int pos = 0;
  printf("Enter the number\n");
  scanf("%d",&iValue);
  
  iRet = ToggleBit(iValue);
  
  printf("Modified number is %d\n",iRet);

  return 0;
}
