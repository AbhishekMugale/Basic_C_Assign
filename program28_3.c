/*Write a program whicih returns additon of all element from singly linear list.


Function Prototype:

int Addition(PNODE Head);

Input linked list : |10|->|20|->|30|->|40|

Output : 100

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
int Addition(PNODE Head)
{
   
   int iSum = 0;
   while(Head->next != NULL)
   {   
      iSum = iSum + Head->data;
      Head = Head->next; 
   }
   return iSum + Head->data;
   
}
int main()
{
  PNODE First = NULL;
  int iRet = 0;
  
  InsertFirst(&First,40);
  InsertFirst(&First,30);
  InsertFirst(&First,20);
  InsertFirst(&First,10);
       
  iRet = Addition(First);
  
  printf("%d\n",iRet);
  
  return 0;
}

