/*Write a program whicih returns Largest element from singly linear list.


Function Prototype:

int Maximum(PNODE Head);

Input linked list : |110|->|230|->|320|->|240|

Output : 320

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
int Maximum(PNODE Head)
{
   
   int iMax = 0;
   
   while(Head->next != NULL)
   {   
      if(iMax < Head->data)
      {
         iMax = Head->data;
      }
      Head = Head->next;    
   }
   if(Head->data>iMax)
   {
     iMax = Head->data;
   }
   return iMax;
   
}
int main()
{
  PNODE First = NULL;
  int iRet = 0;
  
  InsertFirst(&First,240);
  InsertFirst(&First,320);
  InsertFirst(&First,230);
  InsertFirst(&First,110);
       
  iRet = Maximum(First);
  
  printf("%d\n",iRet);
  
  return 0;
}

