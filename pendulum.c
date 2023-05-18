#include<stdio.h>
#include<math.h>
#define PI 3.14
void main()
{
    float L;
    float T;
    printf("enter the length of the pendulum");
    scanf("%f",&L);
    T=2*PI*sqrt(L/9.8);
    printf("%.3f",T);

}