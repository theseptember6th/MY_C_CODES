#include<stdio.h>
#include<stdlib.h>
int* allocate(int n)
{
    int *arr=malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("allocation was failed\n");
        exit(0);
    }
    return arr;
}

void main()
{
    int n;
    int *array=NULL;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    array=allocate(n);
    array[n-1]=1;
    printf("%d",array[n-1]);  // just to check if array is really made
}