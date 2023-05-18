#include<stdio.h>
int main()
//to find the perfect numbers between two numbers
{
    int i;
    int num1;
    int num2;
    int sum=0;
    int j;
    printf("enter the range:\n");
    scanf("%d %d",&num1,&num2);
    for(i=num1;i<=num2;i++)
    {
        for(j=1;j<=i-1;j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
    
        if(sum==i)
        {
             printf("%d\n",i);
        }
        sum=0;
       
    }
    return 0;
}
