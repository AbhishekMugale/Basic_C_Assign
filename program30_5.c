/*Write a program whicih display largest of all digits of all elements of singly linear linked list.


Function Prototype:

void Palindrome(PNODE Head);

Input linked list : |11|->|250|->|532|->|419|

Output : 1   5   3   9

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
void DisplayLarge(PNODE Head)
{
   
   int iDigit = 0,iLarge = 0;
   PNODE temp = Head; 
   while(temp != NULL)
   {   
      
      
      while((temp->data)!=0)
      { 
      
       iDigit = temp->data%10;
       if(iLarge <=iDigit)
       {
          iLarge = iDigit;
       }       
       temp->data = temp->data/10;
       
       
      }
      
      printf("%d\t",iLarge);
      temp = temp->next;   
      iDigit = 0; 
      
   }
  
}
int main()
{
  PNODE First = NULL;
  int iRet = 0;
  
  InsertFirst(&First,419);
  InsertFirst(&First,532);
  InsertFirst(&First,250);
  InsertFirst(&First,11);
       
  DisplayLarge(First);
  
  return 0;
}

