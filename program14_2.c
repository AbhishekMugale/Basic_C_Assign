//Accept N numbers from user and display all such elements which are divisible by 5

// Input :   N    :   6
//       Element  : 85  66  3  80  93  88 
//Output : 85   80

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
   int iCnt = 0;
   printf("Elements divisible by 5 are : \n");
   for(iCnt=0;iCnt<iLength;iCnt++)
   {
      if(Arr[iCnt]%5==0)
      {
         printf("%d\t",Arr[iCnt]);
      }
   }
}

int main()
{
   int *p = NULL;
   int iSize = 0,i = 0;
   printf("Enter Number of Elements \n");
   scanf("%d",&iSize);
   
   p = (int*)malloc(iSize*sizeof(int));
   
   if(p==NULL)
   {
      printf("Unable to allocate Memory");
      return -1;
   }
   
   printf("Enter %d elements : \n",iSize);
   
   for(i = 0;i<iSize;i++)
   {
      scanf("%d",&p[i]);
   }
    
   Display(p,iSize);
    
   free(p); 
   return 0;
}
