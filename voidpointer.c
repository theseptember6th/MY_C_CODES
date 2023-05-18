#include<stdio.h>
void main()
{
    int a=10;
    float b=20;
    void*ptr;
    ptr=&a;
    printf("%d\n",*(int*)ptr);
    ptr=&b;
    printf("%.3f\n",*(float*)ptr);
}