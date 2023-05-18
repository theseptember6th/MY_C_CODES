#include<stdio.h>
int main()
//first 10 odd natural number and their sum
{
    int i;
    int j=1;
    int sum=0;
    for(i=1;i<=10;i++)
    {
        sum=sum+j;
        
        j=j+2;
    }
    printf("the sum of first 10 odd numbers is %d\n",sum);

    return 0;
}