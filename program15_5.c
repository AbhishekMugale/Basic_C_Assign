//Accept N numbers from user and accept one another number as No,return the frequency of No from it;
// Input : N : 6
      //  No : 66
 // Elements : 85  66  3  66  93  88
 //Output : 2 
 
 // Input : N : 6
      //  No : 12
 // Elements : 85  66  3  66  93  88
 //Output : 0
 
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength,int iVal)
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
   return iFreq;
}

int main()
{
   int *p = NULL;
   int iSize=0,i = 0,iRet = 0,iValue = 0;
   printf("Enter the Number of elements");
   scanf("%d",&iSize);
   printf("Enter the Number to be searched");
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
   iRet  = Frequency(p,iSize,iValue);
   printf("Frequency of enterd number %d is %d ",iValue,iRet);
   
   free(p);
   return 0;
} 
