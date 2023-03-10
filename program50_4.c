/* Write a program which accept one number from user and toggle 7th bit and 10th bit of that number. Return modified number.

Input  : 137
Output : 713

*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned UINT;

BOOL ToggleBit(UINT No)
{
// 0000  0000  0000  0000  0000  0010  0100  0000
//  0     0     0     0     0     1     4     0
//  00000240
    UINT Mask = 0X00000240;
    UINT Result = 0;
    
    Result = No ^ Mask;
    
       return Result;
    
    

}

int main()
{
  UINT iValue = 0;
  int iRet = 0;
  
  printf("Enter the number \n");
  scanf("%d",&iValue);
  
  iRet = ToggleBit(iValue);
  
  printf("%d\n",iRet);
  
  return 0;
}  
