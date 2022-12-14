/* Write a program which accepts string from user reverse that string in place.

Input : "abcd"
Output : "dcba"

Input : "abba"
Output : "abba"

*/
#include<stdio.h>
void strRevX(char *str)
{
  int iCnt=0;
  for(iCnt=sizeof(str);iCnt>-1;iCnt--)
  {
     printf("%c",str[iCnt-1]);
  } 
  printf("\n");

}

int main()
{
   char arr[20];
   printf("Enter the String\n");
   scanf("%[^'\n']s",arr);
   strRevX(arr);  
   
   return 0;
}
