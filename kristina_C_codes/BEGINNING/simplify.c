#include<stdio.h>
int main()
{
    int year,month,day;
    printf("enter the date in YYYY-MM-DD\n");
    scanf("%4d-%2d-%2d",&year,&month,&day);
    printf("%d-%d-%d",year,month,day);
    return 0;
}