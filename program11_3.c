//write a program which accept range from user and return addition of all numbers in between that range.(Range should contain positive numbers only)

// Input : 23  30 
//Output : 212

// Input : 10  18 
//Output : 126

// Input : -10  2 
//Output : Invalid Range

// Input : 90  18 
//Output : Invalid Range

#include<stdio.h>


int RangeSum(int iStart,int iEnd)
{   
    
    if(iStart<0||iStart>iEnd)
    {
      return -1;
    }
    int iCnt=0,iSum=0;
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
      iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
   int iValue1 = 0,iValue2 = 0,iRet=0;
  printf("enter a starting element \n");
  scanf("%d",&iValue1);
  printf("enter a ending element \n");
  scanf("%d",&iValue2);
  iRet=RangeSum(iValue1,iValue2);
  if(iRet==-1)
  {
    printf("Invalid Range");
  }
  else
  {
    printf("The sum of range is %d\n",iRet);
  } 
   return 0;
}


