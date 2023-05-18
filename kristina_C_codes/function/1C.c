#include<stdio.h>
int addition__()
{
    int x=5;
    int y=2;
    int sum=x+y;
    return sum;
}

void main()
{
   int x=addition__();
   printf("the sum is %d\n",x);
}