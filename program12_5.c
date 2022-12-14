//Write a program which accept number from user and count frequency of such a digit which are less than 6 .

// Input : 2395
//Output : 3

// Input : 1018
//Output : 3 

// Input : 9000
//Output : 3 

// Input :  96672
//Output : 1

#include<stdio.h>

int Count(int iNo)
{
   int iDigit=0,iCnt=0;
   while(iNo!=0)
   {
      iDigit = iNo%10;
      if(iDigit<6)
      {
        iCnt++; 
      }
      iNo=iNo/10;
   } 
   return iCnt;
}

int main()
{
  int iValue=0,iRet=0;
  printf("Enter a Number \n");
  scanf("%d",&iValue);
  iRet = Count(iValue);
  printf("frequency of Number less than 6 is %d\n",iRet);

  return 0;
  
}
