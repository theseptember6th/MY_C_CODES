#include<stdio.h>
#include<math.h>
//     1/x - 2/x^2 + 3/x^3 - ......
void main()
{
double sum=0;
int n,i;
double x;
printf("enter the value of x");
scanf("%lf",&x);
double term;
printf("enter the number of terms");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    term=(pow(-1,i+1)*i)/pow(x,i);
    sum=sum+term;
}
printf("the sum of %d term is %.3lf",n,sum);


}