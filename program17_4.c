//Accept N Numbers from user and Display all such numbers which contain 3 digits in it.

// Input  :   N  :   6
  //    Elements : 8225   665   3    76   953   858
  // Output :  665  953  958
  
#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
   int iCnt = 0;
   int iDigit = 0;
   int j=0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
     if(Arr[iCnt]>100&&Arr[iCnt]<1000)
     {
        printf("%d\t",Arr[iCnt]);
     }
   
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
   Digits(p,iSize);
   
   free(p);
   
   return 0;
}
