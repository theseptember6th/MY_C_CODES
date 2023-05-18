#include<stdio.h>
void main()
{
    int i,j;
    char name[8]="PROGRAM";
    for(i=0;i<=6;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",name[j]);
        }
        printf("\n");
    }
}