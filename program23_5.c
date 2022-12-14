/* Accept divison of student from user and depends on the division display exam timings. There are 4 divisions in school as A,B,C,D Exam of divison A at 7 AM,B at 8.30 AM,C at 9.20 AM and D at 10.30 Am (application should be case sensitive)

Input : C
Output : Your Exam at 9.20 AM

Input : d
Output:Your exam at 10.30 AM


*/

#include<stdio.h>


void DisplaySchedule(char ch)
{
   if(ch == 'A' || ch == 'a')
   {
     printf("Your Exam at 9 AM\n");
   }
   else if(ch == 'B' || ch == 'b')
   {
     printf("Your Exam time at 8.30 AM\n");
   }
   else if(ch == 'C' || ch == 'c')
   {
     printf("Your Exam time at 9.20 AM\n");
   }
   else if(ch == 'D' || ch == 'd')
   {
     printf("Your Exam time at 10.30 AM\n");
   }
   else
   {
     printf("Please Enter valid divison name\n");
   }
}

int main()
{
  char cValue = '\0';
  
  
  printf("Enter the division of student \n");
  scanf("%c",&cValue);
  
  DisplaySchedule(cValue);

  return 0;
}
