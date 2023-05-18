#include<stdio.h>
int addition__(int x ,int y)
{
   int sum=x+y;
    return sum;
} 


int main()
{
    int add;
    add=addition__(2,3);
    printf("the sum is %d",add);
    return 0;
}