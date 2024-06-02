//https://www.youtube.com/watch?v=VJc0--syviI&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=56
//1st question
#include <stdio.h>
int contains(int *arr,int n,int num)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*(arr+i)==num)
        {
            return 1;  // sucessful
        }
    }
    return 0;    // unsucessful
}
void main()
{
    int numbers[]={1,2,3,4,5,6,7,8,9};
    int n=(int)sizeof(numbers)/sizeof(numbers[0]);
    int (*ptr)[n-1];
    ptr=&numbers;
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    if(contains(*ptr,n,num)){
        printf("%d is there in array",num);
    }
    else{
        printf("%d is not there in array",num);
    }

}
