#include<stdio.h>
void main()
{
    float number;
    float sum=0;
    float average;
    int i=0;
    char choice;
    while(1) // infinite loop banako yeslai break garna bhetra kei condition afai banaune
    {
        printf("enter the number");
        scanf("%f",&number);
        if(number==0)
        {
            break;
        }
        sum=sum+number;
        i=i+1;
    }
     average=sum/i;
     printf("sum is %.3f   average is %.3f",sum,average);
}