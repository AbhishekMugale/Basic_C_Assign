/*write a program which accept string from user and accept one characer 
  return frequency of that character.
  
 Input : "Marvellous Multi OS"
 		 M
 		 
Output 	: 2

Input : "marvellous multi os "
         W
        
Output : 0
*/

#include<stdio.h>

int CountChar(char *str,char ch)
{
  int iCnt = 0;
   while(*str != '\0')
   {
      if(*str == ch)
      {
        iCnt++;
      }
      str++;
   
   }
   return iCnt;
}

int main()
{
   char arr[20];
   char cValue;
   int iRet = 0;
   
   printf("Enter the string\n");
   scanf("%[^'\n']s",arr);
   
   printf("Enter the character\n");
   scanf("%s",&cValue);
   
   iRet = CountChar(arr,cValue);
   
   printf("The frequency of character is %d\n",iRet);

   return 0;
}
