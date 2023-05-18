#include<stdio.h>
void main()
{
    int i,j;
    char name[6]="HELLO";
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",name[j]);
        }
        printf("\n");
        
    }
    for(i=3;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",name[j]);
        }
        printf("\n");
    }
}