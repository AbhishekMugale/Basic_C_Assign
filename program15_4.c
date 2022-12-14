//Accept N Numbes from user and return frequency of 11 from it.

// Input :  N : 6
//  Element : 85  66  3  80  93  88
//Output : 0

// Input :  N : 6
//  Element : 85  11  3  80  11  111
//Output : 2

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
   int iCnt=0,iFreq=0;
   for(iCnt = 0;iCnt<iLength;iCnt++)
   {
      if(Arr[iCnt]==11)
      {
         iFreq++;
      }
   }
   return iFreq;

}

int main()
{
   int *p = NULL;
   int iSize = 0,i = 0,iRet = 0;
   printf("Enter the number of elements \n");
   scanf("%d",&iSize);
   
   p = (int*)malloc(sizeof(int)*iSize);
   
   if(p==NULL)
   {
     printf("Unable to allocate the memory\n");
     return -1;
   }
   printf("Enter the %d elememts : \n",iSize);
   for(i=0;i<iSize;i++)
   {
     scanf("%d",&p[i]);
   }
   iRet = Frequency(p,iSize);
   printf("Frequency of 11 is : %d",iRet);
   free(p);
 
   return 0;
}
