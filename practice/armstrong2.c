#include<stdio.h>
#include<math.h>
void main()
{
    int number,count=0,sum=0,rem;
    printf("enter the number");
    scanf("%d",&number);
    int temp=number;
    // counting the number of digits 
    do{
        count=count+1;
        temp=temp/10;
    }while(temp!=0);
    temp=number;
    // finding sum for armstrong number
    do{
        rem=temp%10;
        sum=sum+pow(rem,count);
        temp=temp/10;
    } while(temp!=0);
    //checking if it is armstrong or not
    if(sum==number)
    {
        printf("%d is the armstrong number",number);
    }
    else
     {
        printf("%d is not the armstrong number",number);
    }
}