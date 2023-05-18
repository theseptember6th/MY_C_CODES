#include<stdio.h>
int main()
//sum of natural numbers upto 7 terms
{
    int n;
    int sum=0;
    for(n=1;n<=7;n++)
    {
        sum=sum+n;
    }
    printf("%d",sum);
    return 0;
}