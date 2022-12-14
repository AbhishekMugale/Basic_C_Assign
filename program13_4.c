//Write a program which accept number from user and return Multiplication of all Digits .

// Input : 2395
//Output : 270

// Input : 1018
//Output : 8

// Input : 9440
//Output : 144  

// Input : 922432
//Output : 864

#include<stdio.h>

int MultDigit(int iNo)
{
   int iDigit=0,iCnt=1;
   while(iNo!=0)
   {
      iDigit = iNo%10;
      if(iDigit==0)
      {
         iDigit = 1;
      }
      iCnt = iCnt*iDigit; 
      
      iNo=iNo/10;
   } 
   return iCnt;
}

int main()
{
  int iValue=0,iRet=0;
  printf("Enter a Number \n");
  scanf("%d",&iValue);
  iRet = MultDigit(iValue);
  printf("Multiplication of digits is %d\n",iRet);

  return 0;
  
}
