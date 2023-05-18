
#include<stdio.h>
int main()
{
    int i;
    int n;
    int j=2;
    int sum=0;
    printf("enter the term:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+j;
        j=j+2;
        
    }
   
printf("sum of %d even numbers is %d\n",n,sum);
    return 0;
}