//Write a program which accept name from user and print that name

//Input : Abhishek Mugale
//Output: Abhishek Mugale

#include<stdio.h>
int main()
{
  char cName[30];
  printf("Please enter full Name : \n");
  scanf("%[^\n]s", &cName );
  printf("Your Full Name is %s \n",cName);

  return 0;
}
