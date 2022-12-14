//Write a program which accept total marks and obtained marks from user and calculate percentage

// Input   : 1000   745
// Output  : 74.5%

#include<stdio.h>

float Percentage(float iNo1,float iNo2)
{    
     if(iNo1==0||iNo2==0)
     {
       return 0;
     }
     else
    {
       return (iNo2/iNo1)*100;    
    }
}
int main()
{
  int iValue1 = 0,iValue2 = 0;
  float fRet = 0.0;
  
  printf("Please enter total Marks : \n");
  scanf("%d",&iValue1);
  printf("Please enter the obtained marks : \n");
  scanf("%d",&iValue2);
  fRet = Percentage(iValue1,iValue2);
  printf("The percentage obtained is %f ",fRet);
  return 0;
}
