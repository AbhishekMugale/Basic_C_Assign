//Write a program to find difference between Even factorial and odd factorial of a given number.

// Input : 5
//Output : -7  (8 - 15) 

// Input : -5
//Output : -7  (8 - 15) 

// Input : 10
//Output : 2895  (3840 - 945) 

#include<stdio.h>

int FactorialDiff(int iNo)
{  
   if(iNo<0)
   {
     iNo = -iNo; 
   }
   int iCnt = 0;
   int oMult = 1;
   int eMult = 1;
   for(iCnt = 1;iCnt <= iNo; iCnt++ )
   { 
      if(iCnt%2==0)
      {
        eMult = eMult * iCnt;
      }
      else
      {
        oMult = oMult * iCnt; 
      }
   }
   return (eMult-oMult);
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Enter a Number \n");
  scanf("%d",&iValue);
  iRet = FactorialDiff(iValue);
  printf("the Difference of Factorial of a number is : %d\n",iRet);
  return 0;
}
