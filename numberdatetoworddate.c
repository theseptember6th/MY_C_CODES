#include<stdio.h>
int main()
{
    int year,month,day;
    printf("enter the date in YYYY/MM/DD format");
    scanf("%D/%D/%D",&year,&month,&day);
    if(day==0&&month==0&year==0)
    {
        return -1;
    }
    switch(month)
    {
        case 1:
        printf("%d of the january,%d",day,year);
        break;
        case 2:
        printf("%d of the february,%d",day,year);
        break;
        case 3:
        printf("%d of the march,%d",day,year);
        break;
        case 4:
        printf("%d of the april,%d",day,year);
        break;
        case 5:
        printf("%d of the may,%d",day,year);
        break;
        case 6:
        printf("%d of the june,%d",day,year);
        break;
        case 7:
        printf("%d of the july,%d",day,year);
        break;
        case 8:
        printf("%d of the august,%d",day,year);
        break;
        case 9:
        printf("%d of the september,%d",day,year);
        break;
        case 10:
        printf("%d of the october,%d",day,year);
        break;
        case 11:
        printf("%d of the November,%d",day,year);
        break;
        case 12:
        printf("%d of the december,%d",day,year);
        break;
        default:
        printf("you live in multiverse sir");


    }
 return 0;
}