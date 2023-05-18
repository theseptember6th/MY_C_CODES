#include<stdio.h>
int * maximum(int * a,int *b);
void main()
{
    int a=10;
    int b=20;
    int*p;
    p=maximum(&a,&b);
    printf("maxm=%d",*p);

}
int * maximum(int *a,int*b)
{
  return (*a>*b)?a:b;
}