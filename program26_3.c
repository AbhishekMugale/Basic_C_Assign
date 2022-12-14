/* Write a program which acccept string from user and toggle the case.

Input : "Marvellous Multi OS"
Output : mARVELLOUS mULTI os
*/

#include<stdio.h>
void strtogglex(char *str)
{
  int iCnt=0;
  while(*str != '\0')
  {
     if(*str>='A'&&*str<='Z')
     {
        printf("%c",*str+32);
     }
     else if(*str >= 'a'&& *str<='z')
     {
        printf("%c",*str-32);   
     }
     str++;
   
    if(*str==' ')
     {
       printf(" ");
     }
    }
}

int main()
{
   char arr[20];
   printf("Enter the String\n");
   scanf("%[^'\n']s",arr);
   strtogglex(arr);  
   
   return 0;
}
