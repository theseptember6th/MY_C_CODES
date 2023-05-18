#include<stdio.h>
int maximum(int *,int*);
void main()
{
   int  a=10;
   int  b=20;
   int *p;
   p=maximum(&a,&b);
   printf("maximum=%d\n",*p);

}
int maximum(int*x,int*y)
{
    if(*x >*y)
    {
        return x;
    }
    else{
        return y;
    }
}