/*Write a program whicih returns second maximum element from singly linear linked list.


Function Prototype:

int SecMaximum(PNODE Head);

Input linked list : |110|->|230|->|320|->|240|

Output : 240

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
int SecMaximum(PNODE Head)
{
   
   int iCnt = 0,iMax = 0,imax = 0;
   PNODE temp = Head; 
   while(Head != NULL)
   {   
      if(iMax < Head->data)
      {
         iMax = Head->data;
      }
      Head = Head->next;    
   }
   Head = temp;
   while(Head!=NULL)
   {
      if(Head->data != iMax && imax<Head->data)
      {
         imax = Head->data;
      } 
      Head = Head->next;
   }
   
  return imax;
}
int main()
{
  PNODE First = NULL;
  int iRet = 0;
  
  
  InsertFirst(&First,240);
  InsertFirst(&First,320);
  InsertFirst(&First,230);
  InsertFirst(&First,110);
       
  iRet=SecMaximum(First);
  
  printf("%d\n",iRet);
  
  return 0;
}

