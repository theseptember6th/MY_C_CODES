//https://www.youtube.com/watch?v=O4XGXQZ7Sgw&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=44   0:23 qn .3 
#include<stdio.h>
float sine(float,int);  // float  value of x and  integer n no of terms
float cosine(float,int);// float  value of x and integer n no of terms
float power(float,int); // float value of x and integer how many times to multiply
int factorial(int);    //int value     will be known later
void main()
{
    float x;
    int n;
    printf("enter the angle in radian\n");
    scanf("%f",&x);
    printf("enter the no of terms to be expanded\n");
    scanf("%d",&n);
    float sine_result=sine(x,n);
    printf("%.3f is the sine of the %.3fangle\n",sine_result,x);
    float cosine_result=cosine(x,n);
     printf("%.3f is the cosine of the %.3fangle\n",cosine_result,x);
}


float power(float x, int n)
{
    
  float result=1;
  int i;
  for(i=1;i<=n;i++)
  {
    result=result*x;
  }
  return result;
}


int factorial(int z)
{
     int i;
   int fact =1;
    for(i=1;i<=z;i++)
    {
        fact=fact*i;
    }
    return fact;
}

float sine(float x,int n)
{
    int i;
    float sum=0;
    int sign=1;
    int term;
    for(i=1;i<=n;i++)
    {
        term= sign*power(x,2*i-1)/factorial(2*i-1);
        sign=sign*-1;
        sum=sum+term;
    }
    return sum;
}


float cosine(float x,int n)
{
    int i;
    float sum=0;
    int sign=1;
    int term;
    for(i=1;i<=n;i++)
    {
        term= sign*power(x,2*i-2)/factorial(2*i-2);
        sign=sign*-1;
        sum=sum+term;
    }
    return sum;
}
