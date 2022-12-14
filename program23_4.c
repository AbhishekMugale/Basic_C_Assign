//accept character from user and check whether it is small case character or not
//(a-z).
/*
Input : 5
Output : FALSE

Input: d
Output : TRUE
*/
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkCapital(char ch)
{
   if(ch>='a'&&ch<='z')
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
     printf("%c is a small case character \n",cValue);
  }
  else
  {
     printf("%c is not a small case character : \n",cValue);
  }


 return 0;
}
