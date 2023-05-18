#include<stdio.h>

void main()
{
    int n,m;
    int rem;
    printf("enter the two numbers\n");
    scanf("%d %d",&m,&n);
   
    while(n!=0)
    {
        rem=m%n;
        m=n;
        n=rem;

    }
    printf("%d is the HCF",m);
}