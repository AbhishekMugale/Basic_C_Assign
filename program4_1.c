//Write a program which accept number from user and display its multiplication of factors.

//// Steps to follow while programming
//////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////

// Step 1    Understand the  problem Statement
// Step 2    Write the Algorithm
// Step 3    Decide the progrramming language
// Step 4    Write the program
// Step 5    Test the program

////////////////////////////////////////////////////////////////////
// Problem Statement : Accept number from user and check whether it   is divisible by 5 or not

 // Input  : 12
 // Output : 144
 //
 // Input  : -6
 // Output : 6
 //
 // Input  : 10
 // Output : 10
 //
 ///////////////////////////////////////////////////////////////////
 
///////////////////////////////////

#include<stdio.h>
int MultFact(int iNo)
{
   int iCnt = 0;
   int iMult = 0;
    iMult = 1;
   if(iNo<=0)
   {
     iNo = -iNo;
   }

   for(iCnt=1;iCnt<=(iNo/2);iCnt++)
   {  
    if(iNo%iCnt==0)
    {
      iMult=iMult*iCnt;
    }
   }
   return iMult;
}
int main()
{ 
  int iValue = 0;
  int iRet = 0;
  printf("Enter a number\n");
  scanf("%d",&iValue);
  iRet = MultFact(iValue);
  printf("The multiplication of Factors is %d\n",iRet);

   return 0;
}
