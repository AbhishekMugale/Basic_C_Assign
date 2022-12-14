/* write a program which accept string from user and accept one character. Return index of first occurence of that character.

 Input : "Marvellous Multi OS"
			M
 Output : 11
 
 Input : "Marvellous Multi OS"
			W
 Output : -1
 
 Input : "Marvellous Multi OS"
			e
 Output : 4
*/

#include<stdio.h>

int LastChar(char *str,char ch)
{
   int iCnt = -1,i=0;
   for(iCnt = sizeof(str);iCnt>0;iCnt--)
   {  
      
      if(str[iCnt]==ch)
      {  
         break;
         
      }
      
     
   }
   if(iCnt>-1)
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
  char arr[30];
  char cValue;
  int iRet = 0;
  
  printf("Enter the String\n");
  scanf("%[^'\n']s",arr);
  
  printf("Enter the character\n");
  scanf("%s",&cValue);
  
  iRet = LastChar(arr,cValue);
  
  printf("Character location of %c at last occurence %d",cValue,iRet);
  
  return 0;
}
