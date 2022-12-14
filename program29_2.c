/*Write a program whicih displays all elements which are prime from singly linear linked list.


Function Prototype:

int DisplayPrime(PNODE Head);

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
void DisplayPrime(PNODE Head)
{
   
   int iCnt = 0,iPrime = 0;
   
   while(Head != NULL)
   {   
     iPrime = 0;
     for(iCnt = 2;iCnt < Head->data;iCnt++)
     { 
        if((Head->data)%iCnt!=0)
        {
            iPrime++;      
        } 
     }
     iPrime= iPrime+2;
     if(Head->data==iPrime)
     {
        printf("%d\t",iPrime);
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
       
  DisplayPrime(First);
  
  
  
  return 0;
}

