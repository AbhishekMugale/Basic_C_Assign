//Write a program which accept number from user and return difference between summation of even digits and summation of odd digits.

// Input : 2395
//Output : -15   (2 - 17)

// Input : 1018
//Output : 6    (8 - 2)

// Input : 8440
//Output : 16  (16 - 0)  

// Input : 5733
//Output : -18 (0 - 18)

#include<stdio.h>

int CountDiff(int iNo)
{
   int iDigit=0,iCnt=0,iNum=0;
   while(iNo!=0)
   {
      iDigit = iNo%10;
      if(iDigit%2==0)
      {
         iCnt=iCnt+iDigit;
      }
      else
      {
         iNum=iNum+iDigit;
      } 
      
      iNo=iNo/10;
   } 
   return iCnt-iNum;
}

int main()
{
  int iValue=0,iRet=0;
  printf("Enter a Number \n");
  scanf("%d",&iValue);
  iRet = CountDiff(iValue);
  printf("Differnce of summation of even and odd  digits is %d\n",iRet);

  return 0;
  
}
