#include<stdio.h>
int main()
//first 20 even numbers sum
{
    int i;
    int j=2;
    int sum=0;
    for(i=1;i<=20;i++)
    {
        sum=sum+j;
        j=j+2;
    }

    
    printf("sum of first 20 even numbers is:%d\n",sum);
    return 0;
}
