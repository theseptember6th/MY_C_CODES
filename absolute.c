#include<stdio.h>
void main()
{
    int number;
    printf("enter the number:\t");
    scanf("%d",&number);
    number>0 ? printf("%d",number) : printf("%d", number * (-1));
    // if(number>0)
    // {
    //     number=number;
    // }
    // else
    // {
    //    number=number*(-1);
    // }
    //printf("%d",number);

}