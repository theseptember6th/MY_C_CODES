#include<stdio.h>
int main()
{
    int i;
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    
        if(num%2==0)
        {
            printf("%d is even number",num);
        }
        else{
            printf("%d is not even number",num);
        }
    
    return 0;
}