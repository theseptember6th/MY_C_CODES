#include<stdio.h>
void main()
{
    int num=5;
    int *ptr;
    ptr=&num;
    int**dptr;
    dptr=&ptr;
    printf("address of ptr is %p\n",&ptr);
    printf("%p\n",dptr);
}