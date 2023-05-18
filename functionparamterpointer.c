#include<stdio.h>
void print_sum(int a,int b)
{
    printf("sum=%d",a+b);
}
void doSomething(int a,int b,void (*fun)(int,int))
{
    fun(a,b);
}
void main()
{
    int a =10;
    int b=20;
    void (*ptr)(int,int);
    ptr=&print_sum;
   // doSomething(a,b,ptr);    
   doSomething(a,b,print_sum);
}