#include<stdio.h>

void square(int *);

void main()
{
    int a=50;
    square(&a);
    printf("the value of a is %d\n",a);
    
}
void square(int *x)
{
    printf("%d\n",*x * *x);
    *x=500;
}