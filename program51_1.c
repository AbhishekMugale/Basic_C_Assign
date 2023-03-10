/* Write a program which accept one number and position from user and check whether bit at that position is on or off.If bit is one return TRUE otherwise return FALSE.

Input  :  10   2
Output :  TRUE

*/

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT No,int pos)
{
  
  UINT Mask1 = 0X00000001;
  UINT Result = 0;
  
  if(pos<1 || pos > 32)
  {
     printf("Please enter the valid positon \n");
     return FALSE;
  }
  
  Mask1 = Mask1 << (pos-1);
  
  Result = No & Mask1;
  
  if(Result == Mask1)
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
  UINT iValue=0;
  int ipos;
  int iRet = 0;
  printf("Enter the number\n");
  scanf("%d",&iValue);
  
  printf("Enter the number of which u want to check the bit is on or off\n");
  scanf("%d",&ipos);
  
  iRet = ChkBit(iValue,ipos);
  
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
