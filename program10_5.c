//Write a program which accept in square feet and convert it into square meter .(1 square feet = 0.0929 square meter)

// Input : 5
//Output :0.464515

// Input : 5
//Output :0.650321

#include<stdio.h>

double SquareMeter(int iNo)
{
   return iNo*0.0929;
}
int main()
{
  int iValue = 0;
  double dRet = 0.0;
  
  printf("Enter are in Sqarefeet\n");
  scanf("%d",&iValue);  
  dRet = SquareMeter(iValue);
  printf("Area in SquareMeter is %lf \n",dRet);
  
  return 0;
} 
