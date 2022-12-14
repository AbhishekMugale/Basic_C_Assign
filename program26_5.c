/* Write a program which accept string from user and count number of white spaces.

Input : "MarvellouS"
Output : 0

Input : "MarvellouS Infosystems"
Output : 1

Input : "Marvellous Infosystems by Piyush Manohar Khairnar"
Output : 5

*/

#include<stdio.h>

void CountWhiteSpace(char *str)
{
   int iCnt = 0;
  while(*str != '\0')
  {
    if(*str==32)
    {
      iCnt++;
    }
    str++;
  }
  printf("%d\n",iCnt);
}

int main()
{
  char arr[70];
  int iRet = 0;
  
  printf("Enter a string\n");
  scanf("%[^'\n']s",arr);
  
   CountWhiteSpace(arr);
  
  return 0;
}
