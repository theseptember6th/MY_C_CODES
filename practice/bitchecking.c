#include<stdio.h>
void main()
{
    int number;
    printf("enter the number:  ");
    scanf("%d",&number);
   // number%2==0 ? printf("number is even")  : printf("number is odd");
    //or using bitwise operator
    number & 1  ? printf("number is oddd")  : printf("number is even");
}