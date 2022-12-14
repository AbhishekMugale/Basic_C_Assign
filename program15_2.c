//Accept N Numbes from user and return difference betweenfrequency of even numbers and odd numbers.

// Input :  N : 7
//  Element : 85  66  3  80  93  88  90
//Output : 1  (4 - 3)

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iLength)
{
   int iCnt=0,iOdd=0,iEven=0;
   for(iCnt = 0;iCnt<iLength;iCnt++)
   {
      if(Arr[iCnt]%2==0)
      {
         iEven++;
      }
      else
      {
        iOdd++;
      }
   }
   return iEven-iOdd;

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
   printf("Frequency of difference of even and odd  numbers is : %d",iRet);
   free(p);
 
   return 0;
}
