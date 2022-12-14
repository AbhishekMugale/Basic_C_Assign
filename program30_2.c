/*Write a program whicih display all palindrome elements of singly linear linked list.


Function Prototype:

void Palindrome(PNODE Head);

Input linked list : |11|->|28|->|17|->|414|->|6|->|89|

Output : 11  6  414

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
void DisplayPalindrome(PNODE Head)
{
   
   int iDigit = 0,ireverse = 0,ino = 0;
   PNODE temp = Head; 
   while(temp != NULL)
   {   
      
      ino = temp->data;
      while((temp->data)!=0)
      { 
      
       iDigit = temp->data%10;
       ireverse = ireverse * 10 + iDigit;          
       temp->data = temp->data/10;
       
      }
      
      if(ireverse == ino)
      {
         printf("%d\t",ireverse);
      }
      temp = temp->next;    
      ireverse = 0;
   }
  
}
int main()
{
  PNODE First = NULL;
  int iRet = 0;
  
  InsertFirst(&First,98);
  InsertFirst(&First,6);
  InsertFirst(&First,414);
  InsertFirst(&First,17);
  InsertFirst(&First,28);
  InsertFirst(&First,11);
       
  DisplayPalindrome(First);
  
  return 0;
}

