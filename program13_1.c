//Write a program which accept number from user and return the count of Even Digits.

// Input : 2395
//Output : 1

// Input : 1018
//Output : 2 

// Input : -1018
//Output :  2 

// Input : 8462
//Output : 4

#include<stdio.h>

int CountEven(int iNo)
{
   int iDigit=0,iCnt=0;
   while(iNo!=0)
   {
      iDigit = iNo%10;
      if(iDigit%2==0)
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
  iRet = CountEven(iValue);
  printf("frequency of even digits is %d\n",iRet);

  return 0;
  
}
