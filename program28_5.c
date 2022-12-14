/*Write a program whicih returns Smallest element from singly linear list.


Function Prototype:

int Minimum(PNODE Head);

Input linked list : |110|->|230|->|20|->|240|->|640|

Output : 20

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
int Minimum(PNODE Head)
{
   
   int iMin = 0;
   iMin = Head->data;
   while(Head->next != NULL)
   {   
      if(iMin >= Head->data)
      {
         iMin = Head->data;
      }
      Head = Head->next;    
   }
   if(iMin > Head->data)
   {
     iMin = Head->data;
   }
   return iMin;
   
}
int main()
{
  PNODE First = NULL;
  int iRet = 0;
  
  InsertFirst(&First,640);
  InsertFirst(&First,240);
  InsertFirst(&First,20);
  InsertFirst(&First,230);
  InsertFirst(&First,110);
       
  iRet = Minimum(First);
  
  printf("%d\n",iRet);
  
  return 0;
}

