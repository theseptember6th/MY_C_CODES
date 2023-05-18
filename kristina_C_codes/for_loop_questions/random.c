#include<stdio.h>
int main()
{
    int num;
    int sum=0;
    int rem;
    int x;
    printf("enter the number:\n");
    scanf("%d",&num); 
     x=num;
     do{
        rem=x%10;
        sum=sum+rem;
        x=x/10;
     }while(x!=0);
     
     printf("sum is %d\n",sum);
    return 0;
}