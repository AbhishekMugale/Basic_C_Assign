//Accept Number of rows and number of columns from user and display below patern

//Input : iRow = 4      iCol = 5

//Output  :   2   4   6   8   10
//            1   3   5   7   9
//            2   4   6   8   10
//            1   3   5   7   9 

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
   int i=0,j=0;
   
   for(i=0;i<iRow;i++)
   {  
       if(i%2==0)
      {
       
        for(j=0;j<iCol;j++)
       {  
         
          printf("%d\t",(j+1)*2);
          
       }
    printf("\n");
      }
      else
      {
       
       for(j=0;j<iCol;j++)
       {  
         
          printf("%d\t",(j*2)+1);
          
       }
    printf("\n");  
      } 
      
   }

}

int main()
{
   int iValue1=0,iValue2=0;
   printf("Enter number of rows and columns\n");
   scanf("%d %d",&iValue1,&iValue2);
   Pattern(iValue1,iValue2);

   return 0;
   
}
