#include<stdio.h>
int main()
//enter 5 numbers and convert into cube
{
    int i;
    int num[5];
    printf("enter the 5 numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("cubes of the input numbers are :\n");

    for(i=0;i<5;i++)
    {
        printf("%d\t",num[i]*num[i]*num[i]);
    
    }
    return 0;
}