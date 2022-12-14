//Accept N NUmbers from user and return product of all odd elements.

//Input : N  ;  6
     // Elements : 15  66  3  70  10  88
     
// Output : 45

//Input : N  ;  6
     // Elements : 44  66  72  70  10  88
     
// Output : 0

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iLength)
{
  int iCnt = 0;
  int iMult = 1;
  int iPro=0;
  for(iCnt = 0;iCnt<iLength;iCnt++)
  {
     if(Arr[iCnt]%2!=0)
     {
       iPro++;
       iMult = iMult * Arr[iCnt];
     }
  }
  if(iPro!=0)
  {
     return iMult;
  }
  else
  {
     return iPro;
  }
   
}

int main()
{
   int *p =NULL;
   int i =0,iSize = 0,iRet=0;
   printf("Enter the number of elements \n");
   scanf("%d",&iSize);
   p = (int *)malloc(iSize*sizeof(int));
   if(p==NULL)
   {
      printf("Unable to allocate Memory");
      return -1;
   }
   
   printf("Enter the %d elements\n",iSize);
   
   for(i = 0;i<iSize;i++)
   {
      scanf("%d",&p[i]);
   }
   iRet = Product(p,iSize);
   printf("Product is :%d",iRet);
   free(p);
   
   return 0;
}
