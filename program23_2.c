//accept character from user and check whether it is capital or not
//(A-Z).
/*
Input : F
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
   if(ch>='A'&&ch<='Z')
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
     printf("%c is a capital letter \n",cValue);
  }
  else
  {
     printf("%c is not  a capital letter or it is not a leter : \n",cValue);
  }


 return 0;
}
