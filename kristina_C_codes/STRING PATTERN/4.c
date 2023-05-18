#include<stdio.h>
void main()
{
    int i,j;
    char name[5]="KNOW";
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",name[j]);
        }
        printf("\n");
    }
    for(i=2;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",name[j]);
        }
        printf("\n");
    }
}