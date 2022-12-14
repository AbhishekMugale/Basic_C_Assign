/* Write a Program which accept string from user and check whether it contains vowels in it or not.

Input : "marvellous"
Output : TRUE

Input : "Demo"
Output : TRUE

Input : "xyz"
Output: FALSE

*/

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
   int iCnt = 0;
   int iCount = 0;
   char ch[10] = {'a','e','i','o','u','A','E','I','O','U'};
   while(*str != '\0')
   {
      for(iCnt = 0;iCnt<10;iCnt++)
      {
         if(*str==ch[iCnt])
         {
            iCount++;
            break;
         }
      }
     str++;
     
   }
   if(iCount!=0)
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
  bool bRet = FALSE;
  
  printf("Enter the string\n");
  scanf("%[^'\n']s",arr);
  
  bRet = ChkVowel(arr);
  
  if(bRet == TRUE)
  {
    printf("String contains vowel\n");
  }
  else
  {
    printf("String doesn't contain vowel\n");
  }
  return 0;
} 
