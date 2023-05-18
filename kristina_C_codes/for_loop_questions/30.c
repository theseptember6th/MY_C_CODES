#include<stdio.h>
int main()
//to check whether the given number is armstrong number or not
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
       sum=sum+rem*rem*rem;
       x=x/10;
      }while(x!=0);  
       if(sum==num)
           {
               printf("%d is the armstrong number",num);
           }
        else{
               printf("%d is not armstrong number",num);
            }
    

    return 0;
}