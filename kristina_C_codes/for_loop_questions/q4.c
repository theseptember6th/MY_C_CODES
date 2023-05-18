#include<stdio.h>
int main()
//sum of 10 numbers and their average
{
    int i;
    int num[10];
    printf("enter 10 numbers\n");
    // USER BATA INPUT LEKO
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    // FINDING SUM
    int sum=0;
    for(i=0;i<10;i++)
    {
       sum=sum+num[i]; 
    }
    printf("sum is %d\n ",sum);
    float average=(float)sum/10;
    printf("average is %f\n",average);

    
    return 0;
}