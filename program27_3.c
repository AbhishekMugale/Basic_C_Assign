/* write a program which accept string from user and accept one character. Return index of first occurence of that character.

 Input : "Marvellous Multi OS"
			M
 Output : 0
 
 Input : "Marvellous Multi OS"
			W
 Output : -1
 
 Input : "Marvellous Multi OS"
			e
 Output : 4
*/

#include<stdio.h>

int FirstChar(char *str,char ch)
{
   int iCnt = -1,i=0;
   while(*str != '\0')
   {  
      
      if(*str==ch)
      {  iCnt++;
         i++;
         break;
      }
      iCnt++;
      str++;
   }
   if(iCnt<=sizeof(str)&&i!=0)
   {
      return iCnt ;
   }
   else
   {
      return -1;
   }

}

int main()
{
  char arr[20];
  char cValue;
  int iRet = 0;
  
  printf("Enter the String\n");
  scanf("%[^'\n']s",arr);
  
  printf("Enter the character\n");
  scanf("%s",&cValue);
  
  iRet = FirstChar(arr,cValue);
  
  printf("Character location of %c is %d",cValue,iRet);
  
  return 0;
}
