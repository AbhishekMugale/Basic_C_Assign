/* Write a program which displays ASCII table . Table constains symbol,
Decimal Hexadecimal and Octal representation of every number from 0 to 255.

*/
#include<stdio.h>
void DisplayASCII()
{
  int i = 0;
  for(i=0;i<=255;i++)
  {
     printf("%c\t%d\t%x\t%o\n",i,i,i,i);
  }

}

int main()
{
   DisplayASCII();
   
   return 0;
} 
