//https://www.youtube.com/watch?v=O4XGXQZ7Sgw&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=44   0:23 qn .3 
#include<stdio.h>
double sine(double,int);  // float  value of x and  integer n no of terms
double cosine(double,int);// float  value of x and integer n no of terms
double power(double,int); // float value of x and integer how many times to multiply
long factorial(int);    //int value     will be known later
void main()
{
    double x;
    int n;
    printf("enter the angle in radian\n");
    scanf("%lf",&x);
    printf("enter the no of terms to be expanded\n");
    scanf("%d",&n);
    // float sine_result=sine(x,n);
    printf("%.3lf is the sine of the %.3fangle\n",sine(x,n),x);
    // float cosine_result=cosine(x,n);
     printf("%.3lf is the cosine of the %.3fangle\n",cosine(x,n),x);
}


double power(double x, int n)
{
    
  double result=1;
  int i;
  for(i=1;i<=n;i++)
  {
    result = result * x;
  }
  return result;
}


long factorial(int n)
{
     int i;
   long fact =1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

double sine(double x,int n)
{
    int i;
    double sum=0;
    int sign=1;
   
    for(i=1;i<=n;i++)
    {
       double term= sign*power(x,2*i-1)/factorial(2*i-1);
        sign=sign*-1;
        sum=sum+term;
    }
    return sum;
}


double cosine(double x,int n)
{
    int i;
    double sum=0.0;
    int sign=1;
    
    for(i=1;i<=n;i++)
    {
        double term= sign*power(x,2*(i-1))/factorial(2*(i-1));
        sign=sign*-1;
        sum=sum+term;
    }
    return sum;
}
