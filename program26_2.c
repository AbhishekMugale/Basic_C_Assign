/*Write a program which accept string from user and convert it into upper case.

Input : "Marvellous Multi OS"

Output : MARVELLOUS MULTI OS

*/
#include<stdio.h>

void strlwrx(char *str)
{
  while(*str !='\0')
  {
     if(*str>='a'&&*str<='z')
     {
        printf("%c",*str-32);
     }
     else 
     {
        printf("%c",*str);
     }
     str++;
  }

}

int main()
{
  char arr[20];
  printf("Enter the String\n");
  scanf("%[^'\n']s",arr);
  strlwrx(arr);
  
  return 0;
}
