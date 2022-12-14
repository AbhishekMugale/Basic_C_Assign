//Accept N Numbers from user and return the largest number

// Input  :   N  :   6
  //    Elements : 85   66   3    66   93   88
  // Output :  93
  
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
   int iCnt = 0;
   int iMax = Arr[0];
   for(iCnt = 0;iCnt<iLength;iCnt++)
   {
      if(Arr[iCnt]>iMax)
      {
         iMax = Arr[iCnt];
      }
   }
   return iMax;

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
   iRet = Maximum(p,iSize);
   printf("maximum number is :%d",iRet);
   free(p);
   
   return 0;
}
