#include<stdio.h>
// to print the elements of arrays 10 times
void main() 
{
    int num[5]={1,2,3,4,5};
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<10;j++)
        {
            printf("%d\t",num[i]);
        }
        printf("\n");
    }

}