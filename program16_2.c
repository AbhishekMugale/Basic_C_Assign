//Accept N numbers from user and accept one another number as No,return the index of the first occurence of No from it;
// Input : N : 6
      //  No : 66
 // Elements : 85  66  3  66  93  88
 //Output : 1 
 
 // Input : N : 6
      //  No : 12
 // Elements : 85  66  3  66  93  88
 //Output : -1
 
#include<stdio.h>
#include<stdlib.h>

int FirstIndex(int Arr[],int iLength,int iVal)
{
   int iCnt = 0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if(Arr[iCnt]==iVal)
      {
       
         break;
      }
   }
   if(iCnt<iLength)
   {
      return iCnt;
   }
   else
   {
     return -1;
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
   iRet  = FirstIndex(p,iSize,iValue);
  
    printf("%d",iRet);
      
   free(p);
   return 0;
} 
