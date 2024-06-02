#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *a=malloc(sizeof(int));
    *a=54;
    int *b=calloc(1,sizeof(int));
    printf("a*b=%d\n",(*a)*(*b));
    if(a!=NULL)
    {
        free(a);
    }
    if(b!=NULL)
    {
        free(b);
    }
}