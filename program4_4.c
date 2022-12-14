//Write a program which accept number from user and return  Summation of al its all  Non-Factors.
#include<stdio.h>
int SumNonFact(int iNo)
{  
   if(iNo<0)
   {
      iNo = -iNo;
   }
   int iCnt = 0;
   int iSum = 0;
   for(iCnt = 2;iCnt<iNo;iCnt++)
   {
     if(iNo%iCnt!=0)
     {
        iSum=iSum+iCnt;
     }
   
   }
   return iSum;

}
int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Enter a number\n");
  scanf("%d",&iValue);
  iRet = SumNonFact(iValue);
  printf("Summation of all non factors is %d\n",iRet);
 
  return 0;
}
