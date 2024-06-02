#include<stdio.h>
int factorial(int);
void main()
{
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    int result=factorial(num);
    printf("the factorial of %d is %d\n",num,result);
}



int factorial(int x)
{
    int i,fact=1;
    if(x==1)
    {
        return x;
    }
    else{
        for(i=1;i<=x;i++)
        {
           fact=fact*i;
        }
        return fact;
        
    }
}