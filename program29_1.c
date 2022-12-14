/*Write a program whicih displays all elements which are perfect from singly linear linked list.


Function Prototype:

int DisplayPerfect(PNODE Head);

Input linked list : |11|->|28|->|17|->|41|->|6|->|89|

Output : 6   28 

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
void DisplayPerfect(PNODE Head)
{
   
   int iMax = 0,iSum = 0,iCnt = 0;
   
   while(Head != NULL)
   {   
     iSum = 0;
     for(iCnt = 1;iCnt <= Head->data/2;iCnt++)
     { 
        if((Head->data)%iCnt==0)
        {
          iSum=iSum + iCnt;
         
        } 
     }
     if(iSum==Head->data)
     {
        printf("%d\t",iSum);
     }
      Head = Head->next;    
   }
   
}
int main()
{
  PNODE First = NULL;
  int iRet = 0;
  
  InsertFirst(&First,89);
  InsertFirst(&First,6);
  InsertFirst(&First,41);
  InsertFirst(&First,17);
  InsertFirst(&First,28);
  InsertFirst(&First,11);
       
  DisplayPerfect(First);
  
  
  
  return 0;
}

