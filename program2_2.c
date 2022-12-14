// Accept one Number from user and print that number of * on screen
#include<stdio.h>
void Display(int iNo)
{
   int iCnt=0;
   while(iNo>iCnt)
   {
     printf("*");
     iNo--;
   }
   printf("\n");
}
int main()
{
  int iValue=0;
  printf("Enter the number\n");
  scanf("%d",&iValue);
  Display(iValue);
  return 0;
}
