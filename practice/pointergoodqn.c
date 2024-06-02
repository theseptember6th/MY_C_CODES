//https://www.youtube.com/watch?v=avNfk-Igl4Q&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=52
#include<stdio.h>
void find_denominations(int sum,int *thousands,int *fivehundreds,int *hundreds,int*fifty,int*tens,int*fives,int*two,int*one)
{
    while(sum>=1000)  // first mai thulo
    {
        (*thousands)++;
        sum=sum-1000;
    }
    while(sum>=500) // tespaxi ali sano and sooon..so codes will go formally
    {
        (*fivehundreds)++;
        sum=sum-500;
    }
     while(sum>=100)
    {
        (*hundreds)++;
        sum=sum-100;
    }
    while(sum>=50)
    {
        (*fifty)++;
        sum=sum-50;
    }
     while(sum>=10)
    {
        (*tens)++;
        sum=sum-10;
    }
     while(sum>=5)
    {
        (*fives)++;
        sum=sum-5;
    }
     while(sum>=2)
    {
        (*two)++;
        sum=sum-2;
    }
     while(sum>=1)
    {
        (*one)++;
        sum=sum-1;
    }
     

    
}
void main()
{
    printf("enter the sum");
    int sum;
    scanf("%d",&sum);
    int thousands=0;
    int fivehundreds=0;
    int hundreds=0;
    int tens=0;
    int fifty=0;
    int fives=0;
    int two=0;
    int one=0;

    find_denominations(sum,&thousands,&fivehundreds,&hundreds,&fifty,&tens,&fives,&two,&one);
    printf("thousands=%d\n",thousands);
    printf("fivehundreds=%d\n",fivehundreds);
    printf("hundreds=%d\n",hundreds);
    printf("fifty=%d\n",fifty);
    printf("tens=%d\n",tens);
    printf("fives=%d\n",fives);
    printf("two=%d\n",two);
    printf("one=%d\n",one);


     
    
}