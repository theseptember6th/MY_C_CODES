#include<stdio.h>
void print_fibonacci(int);
void main()
{
    int n;
    printf("enter the term for fibonacci series");
    scanf("%d",&n);
    print_fibonacci(n);
}

void print_fibonacci(int n)
{
    int a=0,b=1,sum;
    int i;
    for(i=1;i<=n;i++)
    {
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
    }
}