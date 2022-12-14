/*Write a program whicih display addition of digits of0 element from singly linear linked list.


Function Prototype:

int SumDigit(PNODE Head);

Input linked list : |110|->|230|->|20|->|240|->|640|

Output : 2	 5   2   6	 10

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
void SumDigits(PNODE Head)
{
   
   int iDigit = 0,iSum=0;
   PNODE temp = Head; 
   while(temp != NULL)
   {   
      iSum = 0;
      while((temp->data)!=0)
      { 
       iDigit = temp->data%10;
       iSum = iSum + iDigit;
       temp->data = temp->data/10;
      }
      printf("%d\t",iSum);
      temp = temp->next;    
   }
  
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
       
  SumDigits(First);
  
  return 0;
}

