/* Write a program which accept one number and position from user and toggle that bit.Return modified number.

Input  : 10   3
Output : 14

*/

#include<stdio.h>
typedef unsigned int UINT;

UINT ToggleBit(UINT No,int iPos)
{
   UINT Mask = 0X00000001;
   UINT Result =0;
   UINT temp=0;
   Mask = Mask << (iPos-1);
   
   Result = No & Mask;
   
    temp = No ^ Mask;
    return temp;
  
  
  
}
int main()
{
  UINT iValue;
  int iRet=0;
  int pos = 0;
  printf("Enter the number\n");
  scanf("%d",&iValue);
  printf("Enter the position\n");
  scanf("%d",&pos);
  
  iRet = ToggleBit(iValue,pos);
  
  printf("Modified number is %d\n",iRet);

  return 0;
}
