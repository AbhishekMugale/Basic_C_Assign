/* Write a program which accept string from user and Accept one character.check whether that character is present in string or not.

Input : "Marvellous Multi OS"
        e
        
Output : TRUE

Input : "Marvellous Multi OS"
        W
        
Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkChar(char *str,char ch)
{
   int iCnt=0;
   
   while(*str != '\0')
   {
      if(*str==ch)
      {
        iCnt++;
        break;
      }
      str++;
   
   }
   if(iCnt!=0)
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
  char arr[30];
  char cValue ;
  bool bRet = FALSE;
  
  
  
  printf("Enter String\n");
  scanf("%[^'\n']s",arr);
  
  printf("Enter the character\n");
  scanf("%s",&cValue);
  
  bRet = ChkChar(arr,cValue);
  
  
  if(bRet==TRUE)
  {
    printf(" the character is found\n");
  }
  else
  {
     printf("the character is not present\n");
  }
  
  
  return 0;
}

       
