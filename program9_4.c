//Write a program to find odd factorial of a given number.

// Input : 5
//Output : 15  (5*3*1) 

// Input : -5
//Output : 15  (5*3*1) 

// Input : 10
//Output : 945  (9*7*5*3*1) 

#include<stdio.h>

int OddFactorial(int iNo)
{  
   if(iNo<0)
   {
     iNo = -iNo; 
   }
   int iCnt = 0;
   int iMult = 1;
   for(iCnt = 1;iCnt <= iNo; iCnt = iCnt+2 )
   { 
     iMult = iMult * iCnt;
    
   }
   return iMult;
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Enter a Number \n");
  scanf("%d",&iValue);
  iRet = OddFactorial(iValue);
  printf("the Even Factorial of a number is : %d\n",iRet);
  return 0;
}
