#include<stdio.h>
int main()
//to find the even numbers betn num1 and num2
{
    int i;
    int num1;
    int num2;
    printf("enter the two numbers:\n");
    scanf("%d %d",&num1,&num2);
    for(i=num1;i<=num2;i++)
    {
    if(i%2==0)
    {
        printf("%d  ",i);
    }
    }
    return 0;
}