/*Write a program whicih search first occurence of particular element from singly linear list.
Function should return position at which element is found.

Function Prototype:

int SearchFirstOcc(PNODE Head,int no);

Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|

Input element : 30

Output : 3

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
int SearchFirstOcc(PNODE Head,int no)
{
   
   int iCnt = 0,iJnt = 0;
   while(Head->next != NULL)
   {   
      iJnt++;
      if(Head->data == no)
      {
          iCnt++;
          break;
      }
      Head = Head->next;
   }
   if(iCnt==1&&iJnt!=0)
   {
      return iJnt;
   }
   else
   {
      return -1;
   }
}
int main()
{
  PNODE First = NULL;
  int iRet = 0;
  InsertFirst(&First,70);
  InsertFirst(&First,30);
  InsertFirst(&First,50);
  InsertFirst(&First,40);
  InsertFirst(&First,30);
  InsertFirst(&First,20);
  InsertFirst(&First,10);
       
  iRet = SearchFirstOcc(First,30);
  
  printf("%d\n",iRet);
  
  return 0;
}

