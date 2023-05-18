#include<stdio.h>
int main()
//multiplication table of any input number
{
    int j,i;
    printf("enter the number:");
    scanf("%d",&i);
    printf("%d\n",i);
    for(j=1;j<=10;j++)
    {
        printf("%d * %d = %d\n",i,j,i*j);
    }
    return 0;
}