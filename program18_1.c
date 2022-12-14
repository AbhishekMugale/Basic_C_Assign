//Accept number from user and display below pattern.

//Input : 5
//Output : A  B  C  D  E

#include<stdio.h>

void Pattern(int iValue)
{
   char ch = 'A';
   int iCnt = 0;
   if(iValue < 0)
   {
     iValue = -iValue;
   }
   for(iCnt=0;iCnt<iValue;iCnt++)
   {
      printf("%c\t",ch);
      ch++;
   }
   printf("\n");

}

int main()
{  
  int iValue = 0;
  printf("Enter the Number\n");
  scanf("%d",&iValue);
  
  Pattern(iValue);

   return 0;
   
}
