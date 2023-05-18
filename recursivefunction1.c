#include<stdio.h>
int sum_of_n_natural_numbers(int);
void main()
{
    int n;
    printf("enter the nth term of natural term\n");
    scanf("%d",&n);
    int sum=sum_of_n_natural_numbers(n);
    printf("the sum upto first %d natural number is %d",n,sum);
}
int sum_of_n_natural_numbers(int n)
{
    if(n==0)
    {
        return 0;
    }
    else{
        return n+sum_of_n_natural_numbers(n-1);
    }
}