#include<stdio.h>
int main()
{
    int i;
    int num;
    int sum=0;

    printf("enter the positive integer number:\n"); //INPUT
    scanf("%d",&num);
   
   
    for(i=1;i<=num-1;i++)
    {
       if(num%i==0) //divide garxa ki gardaina vanera checking
       {
          sum=sum+i;  
       } 
       
    }

    if(sum==num)
    {
        printf("%d is the perfect number\n ",num);
    }
    else{
        printf("%d is not the perfect number\n",num);
    }
   
    

    return 0;
}