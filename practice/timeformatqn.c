#include<stdio.h>
void main()
{ 
    int hr,min;
    printf("enter the time in 24 hr hh:mm format");
    scanf("%2d:%2d",&hr,&min);
    char a_or_p='A';
    if(hr<12)
    {
        printf("%2d:%2d %CM",hr,min,a_or_p);
    }
    else 
    {
        a_or_p='P';
        printf("%2d:%2d %CM",hr-12,min,a_or_p);
    }
}