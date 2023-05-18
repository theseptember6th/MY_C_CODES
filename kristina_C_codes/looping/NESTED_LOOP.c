#include<stdio.h>
int main()
{
    // 0+1+2+3 0+1+2+3  0+1+2+3  0+1+2+3
    int i,j;
    int sum=0;
    for(i=0;i<=3;i++)
    {
        for(j=0;j<=3;j++)
        {
            sum=sum+j;
            
        }
    }
    printf("sum is %d\n",sum);
    return 0;
}