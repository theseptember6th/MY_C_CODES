#include<stdio.h>
void main()
{
     unsigned int month,day,year;
    printf("enter tbe date of birth in YYYY-MM-DD format\t");
    scanf("%u-%u-%u",&year,&month,&day);
    printf("birth year =%u  month =%u day=%u ",year,month,day);

}