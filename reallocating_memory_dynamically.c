#include<stdio.h>
#include<stdlib.h>
void print(int*arr,int n)
{ int i;
    for(i=0;i<n;i++)
    {
      printf("%d ",arr[i]);
    }
    
}
void main()
{
    int n;
    printf("enter the no of integers:\n");
    scanf("%d",&n);
    int *arr;
    arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("allocation was failed\n");
        exit(1);
    }
    int i;
    printf("enter the integers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    print(arr,n);
    printf("how many extra integers do you want to store?\n");
    int m;
    scanf("%d",&m);
    int *temp=(int*)realloc(arr,(n+m)*sizeof(int));
    if(temp==NULL)
    {
        printf("reallocation was failed\n");
        free(arr);
        exit(2);
    }
    arr=temp;
    printf("enter the extra integers:\n");
    for(i=n;i<(n+m);i++)
    {
        scanf("%d",&arr[i]);
    }
    print(arr,n+m);
    if(arr!=NULL)
    {
        free(arr);
    }

    
}