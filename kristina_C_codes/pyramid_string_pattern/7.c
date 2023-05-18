#include<stdio.h>
void main()
{
    int i,j,space;
    int a=0;
    char name[8]="PROGRAM";
    for(i=0;i<=4;i++)
    {
        for(space=0;space<=4-i;space++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            printf("%c ",name[a++]);
        
        if(name[a]=='\0') a=0;
        }
        printf("\n");
    } 
} 

