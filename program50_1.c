/* Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number.

Input  : 79
Output : 15

*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned UINT;

BOOL OffBit(UINT No)
{
//  1111   1111   1111   1111   1111   1111   1011   1111
//   F      F      	F      F      F      F      B      F
// FFFFFFBF
    UINT Mask = 0XFFFFFFBF;
    UINT Result = 0;
    
    Result = No & Mask;
    
       return Result;
    
    

}

int main()
{
  UINT iValue = 0;
  int iRet = 0;
  
  printf("Enter the number \n");
  scanf("%d",&iValue);
  
  iRet = OffBit(iValue);
  
  printf("%d\n",iRet);
  
  return 0;
}  
