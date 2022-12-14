//Write a program which accept number from user and return difference between summation of all its factors and non-factors
#include<stdio.h>
int FactDiff(int iNo)
{
   int iCnt = 0;
   int iFsum = 0;
   int iNfsum = 0;
   if(iNo<0)
   {
     iNo = -iNo;
   }
   for(iCnt=1;iCnt<iNo;iCnt++)
   {
      if(iNo%iCnt==0)
      {
        iFsum = iFsum + iCnt;
      }
      else
      {
        iNfsum = iNfsum + iCnt;
      }
   
   }
   return iFsum-iNfsum;
}
int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Enter a number\n");
  scanf("%d",&iValue);
  iRet = FactDiff(iValue);
  printf("Diierence between summation of factors and non    factors is : %d\n",iRet);
  return 0;
}
