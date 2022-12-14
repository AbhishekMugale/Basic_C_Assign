//Accept N NUmbers from user and display all such elements which are Multiples of 11.
//Input : N  ;  6
     // Elements : 85  66  3  55  93  88
     
// Output : 66  55   88

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
  int iCnt = 0;
  printf("The Number which are of Multiples of 11 are \n");
  for(iCnt = 0;iCnt<iLength;iCnt++)
  {
     if(Arr[iCnt]%11==0)
     {
       printf("%d\t",Arr[iCnt]);
     }
  }

}

int main()
{
   int *p =NULL;
   int i =0,iSize = 0;
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
   Display(p,iSize);
   free(p);
   
   return 0;
}
