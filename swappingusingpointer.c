#include<stdio.h>
void swap(int*,int*);
void main()
{
   int a=50;
   int b=60;
   swap(&a,&b);
   printf("a=%d,b=%d",a,b);
}
void swap(int*x,int*y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
