#include<stdio.h>
int main()
//factorial of 5
{
    int i;
    int factorial=1;
    for(i=5;i>=1;i--)
    {
        factorial=factorial*i;
    }
    printf("factorial of 5 is %d\n",factorial);

    return 0;
}