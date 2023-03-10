/* Write a program which checks whether first and last bit is On or OFF.First bit means bit number 1 and last bit means bit number 32.*/

#include<stdio.h>
typedef int BOOL;
typedef unsigned UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT No)
{
// 1000  0000  0000  0000  0000  0000  0000  0001
//  8     0     0     0     0     0     0     1
//  80000001

  UINT Mask = 0X80000001;
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
   
  UINT iValue = 0;
  int iRet = 0;
  
  printf("Enter a number\n");
  scanf("%d",&iValue);
  
  iRet = CheckBit(iValue);
  
  if(iRet == 1)
  {
    printf("TRUE\n");
  }  
  else
  {
    printf("FALSE");
  }
 
  return 0;
}
