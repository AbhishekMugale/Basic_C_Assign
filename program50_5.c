/* Write a program which accept one number from user and On First Four bit of that number. Return modified number.

Input  : 73
Output : 79

*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned UINT;

BOOL OnBit(UINT No)
{
// 0000  0000  0000  0000  0000  0000  0000  1111
//  0     0     0     0     0     0     0      F
//  0000000F
    UINT Mask = 0X0000000F;
    UINT Result = 0;
    
    Result = No | Mask;
    
       return Result;
    
    

}

int main()
{
  UINT iValue = 0;
  int iRet = 0;
  
  printf("Enter the number \n");
  scanf("%d",&iValue);
  
  iRet = OnBit(iValue);
  
  printf("%d\n",iRet);
  
  return 0;
}  
