//Accept one character from user and check weather the character is vowel(a,e,i,o,u) or not.

#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0


bool checkVowel (char cNo)
{
int lower= 0;
int upper= 0;

lower = (cNo =='a' || cNo == 'e' || cNo == 'i' || cNo == 'o'|| cNo == 'u');
upper =(cNo =='A' || cNo == 'E' || cNo == 'I' || cNo == 'O'|| cNo == 'U');

    
        if (lower|| upper)
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

    char cvalue = '\0';
    bool bRet = FALSE;
printf("Enter Character\n");
    scanf("%c",&cvalue);

    bRet = checkVowel(cvalue);
    if (bRet == TRUE)
    {
        printf("It is  Vowel\n");
    }
    else
    {
        printf("This is not vowel\n");
    }
}
