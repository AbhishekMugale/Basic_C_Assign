/*Write a program whicih display product of all digits of all elements of singly linear linked list.


Function Prototype:

void Palindrome(PNODE Head);

Input linked list : |11|->|20|->|32|->|41|

Output : 1  2  6  4

*/

#include<stdio.h>
#include<stdlib.h>



struct node
{
   int data ;
   struct node * next;
};
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE Head,int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = no;
    newn->next = NULL;
    
    if(*Head == NULL)
    {
       *Head = newn;  
    }
    else
    {
       newn->next = *Head;
       *Head = newn;
    }

}
void DisplayProduct(PNODE Head)
{
   
   int iDigit = 0,iMult = 0;
   PNODE temp = Head; 
   while(temp != NULL)
   {   
      
      iMult = 1;
      while((temp->data)!=0)
      { 
      
       iDigit = temp->data%10;
       if(iDigit == 0)
       {
         iDigit = 1;
       }
       iMult = iMult*iDigit;          
       temp->data = temp->data/10;
       
      }
      printf("%d\t",iMult);
      
      temp = temp->next;    
      
   }
  
}
int main()
{
  PNODE First = NULL;
  int iRet = 0;
  
  InsertFirst(&First,41);
  InsertFirst(&First,32);
  InsertFirst(&First,20);
  InsertFirst(&First,11);
       
  DisplayProduct(First);
  
  return 0;
}

