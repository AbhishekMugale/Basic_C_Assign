//Write a program to find even factorial of a given number.

// Input : 5
//Output : 8  (4*2) 

// Input : -5
//Output : 8  (4*2) 

// Input : 10
//Output : 3840  (10*8*6*4*2) 

#include<stdio.h>

int EvenFactorial(int iNo)
{  
   if(iNo<0)
   {
     iNo = -iNo; 
   }
   int iCnt = 0;
   int iMult = 1;
   for(iCnt = 2;iCnt <= iNo; iCnt = iCnt+2 )
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
  iRet = EvenFactorial(iValue);
  printf("the Even Factorial of a number is : %d\n",iRet);
  return 0;
}
