#include<stdio.h>
void main()
{
    int arr[]={5,10,15,20,25,30};
    //printf("%d\n",*((&arr[2])+3)); // 3 object paxi janu vaneko yesko meaning
    //printf("%d\n",&arr[5]-&arr[2]); 
   // printf("%d\n",*((&arr[4])-2));
    //printf("%d\n",&arr[2]==&arr[3]);
    printf("%d\n",&arr[2]>&arr[1]);
}