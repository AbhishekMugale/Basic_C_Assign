// Accept one character from user and convert case of that character
#include<stdio.h>
#include<ctype.h>


void DisplayConvert(char Cvalue)
{
    
    if( Cvalue>='a' && Cvalue<='z')
    {

        printf("%c\n",toupper(Cvalue));
    }
    else if (Cvalue>='A' && Cvalue<='Z')
    {

        printf("%c\n",tolower(Cvalue));
    }
}


int main()
{



    char cvalue = '\0';
    printf("Enter character\n");

    scanf("%c",&cvalue);

    DisplayConvert(cvalue);

return 0;



}
