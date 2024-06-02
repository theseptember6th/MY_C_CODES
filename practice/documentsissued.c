#include<stdio.h>
int main()
{
    int year,month,day;
    printf("enter the date in YYYY/MM/DD format");
    scanf("%4D/%2D/%2D",&year,&month,&day);
    printf("The document has been issude on %d",day);
    if(day>31 && month>12)
    {
        return -1;
    }
    else 
    {
    switch(day)
    {
     case 1:
     case 11:
     case 21:
     case 31:
        printf("st");
        break;
     case 2:
     case 12:
     case 22:
        printf("nd");
        break;
    case 3:  
    case 13:
    case 23:
        printf("rd");
        break;
    default:
    printf("th");
    }
 }
  switch(month)
    {
        case 1:
        printf("day of january,%d",year);
        break;
        case 2:
        printf("day of february,%d",year);
        break;
        case 3:
        printf("day of march,%d",year);
        break;
        case 4:
        printf("day of april,%d",year);
        break;
        case 5:
        printf("day of may,%d",year);
        break;
        case 6:
       printf("day of june,%d",year);
        break;
        case 7:
        printf("day of july,%d",year);
        break;
        case 8:
        printf("day of august,%d",year);
        break;
        case 9:
       printf("day of september,%d",year);
        break;
        case 10:
        printf("day of october,%d",year);
        break;
        case 11:
      printf("day of november,%d",year);
        break;
        case 12:
       printf("day of december,%d",year);
        break;
        default:
        printf("you live in multiverse sir");

    }
 return 0;
}