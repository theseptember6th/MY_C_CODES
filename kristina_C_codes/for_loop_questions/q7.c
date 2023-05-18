#include<stdio.h>
int main()
//multiplication table from 1 to 8
{

    int i,j;
    for(i=1;i<=8;i++)
    {
         printf("table for %d\n",i);
        for(j=1;j<=10;j++)
        {
            printf("%d * %d=%d\n",i,j,i*j);
        }
        printf("\n\n");
    }
    return 0;
}