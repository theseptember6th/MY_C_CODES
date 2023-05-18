#include<stdio.h>
void main()
{
    int i,k;
    int x;
    for(i=1;i<=3;i++)
    {
        x=i;
        for(k=i;k>=1;k--)
        {
            printf("%d",x);
            x=x-1;
        }
        printf("\n");
    }
}