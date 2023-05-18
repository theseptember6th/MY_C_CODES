#include<stdio.h>
void main()
{
    int num[]={1,2,3,4,5,6,7,8};
    int *p;
    p = &num[0];
    printf("%d\n",p);
    printf("%d\n",*p);

    p=p+2;
    printf("after the change\n");
    printf("%d\n",p);
    printf("%d",*p);
}