//Accept N numbers from user and accept Range,Display all elements from that range;
// Input : N : 6
      //Start: 60
      //End : 90
 // Elements : 85  66  3  76  93  88
 //Output : 85   66   76   88
 
 // Input : N : 6
      //Start: 30
      //End : 50
 // Elements : 85  66  3  76  93  88
 //Output :
 
 
 
#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iLength,int iVal1,int iVal2)
{
   int iCnt = 0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   { 
     if(Arr[iCnt]>iVal1&&Arr[iCnt]<iVal2)
      {
       printf("%d\t",Arr[iCnt]);
      } 
   }
  
   
}

int main()
{
   int *p = NULL;
   int iSize=0,i = 0,iRet = 0,iStart = 0,iEnd=0;
   printf("Enter the Number of elements\n");
   scanf("%d",&iSize);
   printf("Enter the start element \n");
   scanf("%d",&iStart);
   printf("Enter the end element \n");
   scanf("%d",&iEnd);
   
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
   Range(p,iSize,iStart,iEnd);
  
  
      
   free(p);
   return 0;
} 
