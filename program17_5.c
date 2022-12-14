//Accept N Numbers from user and Display Summation of digits of each number.

// Input  :   N  :   6
  //    Elements : 8225   665   3    76   953   858
  // Output :  17  17  3  13  17   21 
  
#include<stdio.h>
#include<stdlib.h>

void DigitSum(int Arr[],int iLength)
{
   int iCnt = 0;
   int iDigit = 0;
   int iSum=0;
   for(iCnt=0;iCnt<iLength;iCnt++)
   {  
     iSum = 0; 
     while(Arr[iCnt]!=0)
     {  
        
        iDigit=Arr[iCnt]%10;
        iSum = iSum + iDigit;
        Arr[iCnt]=Arr[iCnt]/10;
     }
     printf("%d\t",iSum);
   
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
   DigitSum(p,iSize);
   
   free(p);
   
   return 0;
}
