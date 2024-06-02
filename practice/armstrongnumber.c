#include<stdio.h>
void main()
{
    int sum=0,num,k,rem,count=0;
    printf("enter the number ");
    scanf("%d",&num);
    k=num;
    while(num!=0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
        count=count+1;
    }
    if(sum==k)
    {
        printf("%d is the armstrong number",k);
    }
    else
    {
        printf("%d is not the armstrong number ",k);
    }
   printf("there are %d digits in given number",count);
    
}