#include<stdio.h>
void main()
{
int i,j,s;
for(i=4;i>=1;i--)
{
    for(s=1;s<=4-i;s++)
    {
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++)
    {
        printf("*");
    }
    printf("\n");
}
}