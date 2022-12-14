//Write a program which accept temprature in fahrenheight ad convert it into celsius.(1 celsius = (Fahrenheit-32)*(5/9))

// Input :10
//Output :-12.2222  (10-32)*(5/9)

// Input :34
//Output :1.11111  (34-32)*(5/9)

#include<stdio.h>

double FHtoCs(float fTemp)
{
  double dTempis = (fTemp-32)*((0.55555));
  return dTempis;
}

int main()
{
  float fValue = 0.0;
  double dRet = 0.0;
  printf("Enter the temptrature in Fahrenheiht : \n");
  scanf("%f",&fValue);
  dRet = FHtoCs(fValue);
  printf("temprature in degree celsius is : %lf \n",dRet);
  return 0;
}

