//Accept N numbers from user and accept one another number as No,check whether No is present or not.
// Input : N : 6
      //  No : 66
 // Elements : 85  66  3  66  93  88
 //Output : TRUE 
 
 // Input : N : 6
      //  No : 12
 // Elements : 85  66  3  66  93  88
 //Output : FALSE
 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL Check(int Arr[],int iLength,int iVal)
{
   int iCnt = 0,iFreq=0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if(Arr[iCnt]==iVal)
      {
        iFreq++;
      }
   }
   if(iFreq==0)
   {
      return 0;
   }
   else
   {
    return 1;
   }
}

int main()
{
   int *p = NULL;
   int iSize=0,i = 0,iRet = 0,iValue = 0;
   printf("Enter the Number of elements\n");
   scanf("%d",&iSize);
   printf("Enter the Number to be searched\n");
   scanf("%d",&iValue);
   
   p = (int*)malloc(sizeof(int)*iSize);
   
   if(p==NULL)
   {
      printf("Unable to allocate the memory");
      return -1;
   }
   
   printf("Enter the %d elements : ",iSize);
   for(i = 0;i<iSize;i++)
   {
     scanf("%d",&p[i]);
   }
   iRet  = Check(p,iSize,iValue);
   if(iRet==TRUE)
   {
     printf("TRUE");
   }
   else
   {
     printf("FALSE");
   }
   
   free(p);
   return 0;
} 
