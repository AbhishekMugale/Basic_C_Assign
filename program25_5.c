/* write a program which accept string from user and display it is reverse order.

Input : "MarvellouS"
Output : "suollevraM"

*/

#include<stdio.h>

void Reverse(char *str)
{
   int iCnt = sizeof(str);
    for(int i=iCnt+1 ; i>-1;i--)
   {
      printf("%c",str[i]);
   }

}

int main()
{ 
  char arr[20];
  printf("Enter the string\n");
  scanf("%[^'\n']s",arr);
  Reverse(arr);
  return 0;
}
