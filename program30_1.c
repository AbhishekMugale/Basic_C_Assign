/*Write a program whicih reverse element from singly linear linked list.


Function Prototype:

void Reverse(PNODE Head);

Input linked list : |11|->|28|->|17|->|41|->|6|->|89|

Output : |11|->|82|->|71|->|14|->|6|->|98|

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
void Reverse(PNODE Head)
{
   
   int iDigit = 0,ireverse=0;
   PNODE temp = Head; 
   while(temp != NULL)
   {   
    
      while((temp->data)!=0)
      { 
       
       iDigit = temp->data%10;
       ireverse = ireverse * 10 + iDigit; 
       temp->data = temp->data/10;
       
      }
      temp = temp->next;
      printf("| %d |->",ireverse);    
      ireverse = 0;
   }   
  
}
int main()
{
  PNODE First = NULL;
  int iRet = 0;
  
  InsertFirst(&First,98);
  InsertFirst(&First,6);
  InsertFirst(&First,41);
  InsertFirst(&First,17);
  InsertFirst(&First,28);
  InsertFirst(&First,11);
       
  Reverse(First);
  
  return 0;
}

