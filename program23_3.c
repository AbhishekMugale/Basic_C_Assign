//accept character from user and check whether it is Digit or not
//(0-9).
/*
Input : 5
Output : TRUE

Input: d
Output : FALSE
*/
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
   if(ch>=48&&ch<=57)
   {
     return TRUE;
   }
   else
   {
     return FALSE;
   }
 
}

int main()
{
  char cValue = '\0';
  bool bRet = FALSE;
  
  printf("Enter the Character\n");
  scanf("%c",&cValue);
  
  bRet=ChkCapital(cValue);
  
  if(bRet==TRUE)
  {
     printf("%c is a digit \n",cValue);
  }
  else
  {
     printf("%c is not  a digit : \n",cValue);
  }


 return 0;
}
