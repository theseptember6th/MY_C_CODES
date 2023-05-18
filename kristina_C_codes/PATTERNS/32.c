#include<stdio.h>
int main()
//to find whether the given number is prime or not
{
    int i;
    int num;
    
    printf("enter the number to be checked:\n");
    scanf("%d",&num);
    
    for(i=1;i<=num-1;i++)
    {
        do{
            num/i;
        }while(i!=1);
        if(num%i!=0){
            printf("%d is the prime number",num);
        }
        else{
            printf("%d is not the prime number",num);
        }
    }
    return 0;
}