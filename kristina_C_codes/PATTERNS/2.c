#include<stdio.h>
int main()
{
    int i,j;
    int x=9;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)//column
        {
            
            printf("%d ",x);
            x=x+1;
        }
        printf("\n");
    }
    return 0;
}