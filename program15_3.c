//Accept N Numbes from user and Check whether that number contains 11 in it or not.

// Input :  N : 6
//  Element : 85  66  11  80  93  88  
//Output : 11  is  present 

// Input :  N : 6
//  Element : 85  66  3  80  93  88  
//Output : 11  is  absent 


#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[],int iLength)
{
   int iCnt=0,iVal=0;;
   for(iCnt = 0;iCnt<iLength;iCnt++)
   {
      if(Arr[iCnt]==11)
      {
         iVal++;
         break;
      }
     
   }
   if(iVal != 0 )
   {
     return 1;
   }
   else
   {
     return 0;
   }

}

int main()
{
   int *p = NULL;
   int iSize = 0,i = 0;
   bool bRet = FALSE;
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
   bRet = Check(p,iSize);
   if(bRet==1)
   {
    printf("11 is Present");
   }
   else
   {
    printf("11 is absent");
   }
   free(p);
 
   return 0;
}
