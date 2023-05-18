#include<stdio.h>
int main()
{
    int i,j;
    int space;
    for(i=1;i<=4;i++)  // for ROWS
    {
        for(space=1;space<=4-i;space++)  // for spaces
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)    // FOR star COLUMN RELATION
        {
            printf("*   ");
        } 
    
    printf("\n");
    }
    return 0;
}