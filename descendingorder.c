#include<stdio.h>
void main()
{
    int i,j,temp;
    int num[5];
    printf("enter the numbers: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(num[i]<num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",num[i]);
    }
}