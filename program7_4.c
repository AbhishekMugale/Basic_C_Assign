//Write a program which accept N from User and print all odd numbers up to N.

//Input    :    18
//Output   :  1  3  5  7  9  11  13 

#include<stdio.h>

void OddDisplay(int iNo)
{
   int iCnt = 0;
   for(iCnt = 1;iCnt <= (iNo - 4);iCnt = iCnt+2 )
   {
     printf("%d\t",iCnt);
   }
 
}

int main()
{
  int iValue = 0;
  printf("Enter a number \n");
  scanf("%d",&iValue);
  
  OddDisplay(iValue);

  return 0;
}  
