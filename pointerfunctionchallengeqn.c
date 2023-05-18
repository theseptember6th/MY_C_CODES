//https://www.youtube.com/watch?v=AFBdlwV5iUI&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=61

#include<stdio.h>
int arrsum(int arr[],int size)
{
    int sum=0;
    int i;
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

void nothing(int array[],int n,int(*fun)(int,int))
{

    int size=fun(array,n);
    printf("sum=%d\n",size);

}
void main()
{
    int num[]={1,2,3,4,5,6,7,8};
    void(*ptr)(int,int);
    ptr=&arrsum;
    nothing(num,sizeof(num)/sizeof(num[0]),ptr);

}