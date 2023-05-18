#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("enter the no of integers\n");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    if(arr==NULL)
    {
        printf("the allocation was failed\n");
        //return -1;
        exit(1);
    }

    // arr is not null pointer
    int i;
    printf("enter the integers\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=%d ",i,arr[i]);
    }
  // my all work is done now
  if(arr!=NULL)
  {
  free(arr);
  }

    return 0;
}