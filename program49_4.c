/* Write a program which checks whether 7th & 8th & 9th bit is On or OFF.
*/

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT No)
{
//  0000  0000  0000  0000  0000  0001  1100  0000
//   0      0    0     0     0     1      C     0
//   000001C0

    UINT Mask = 0X000001C0;
    UINT Result = 0;
    
    Result = No & Mask;
    
    if(Result==Mask)
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
  
  printf("Enter the number\n");
  scanf("%d",&iValue);
  
  iRet = CheckBit(iValue);
  
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
