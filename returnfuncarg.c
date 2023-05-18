#include<stdio.h>
int square(int);
void main()
{
    int result=square(10);
    printf("the result is %d",result);
   
}
int square(int x)
{
    return x*x;
}