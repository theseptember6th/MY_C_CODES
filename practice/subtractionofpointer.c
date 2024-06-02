#include<stdio.h>
void main()
{
    int num[]={1,2,3,4,5,6};
    int *p;
    int *q;
    p=&num[1];
    q=&num[4];
    printf("%d",p-q);
}