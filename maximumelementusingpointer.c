#include<stdio.h>
void find_maximum_minimum(int arr[],int n,int*max,int*min);
void main()
{
    int num[]={100,99,999,225,150};
   
    
    
    int max, min;
    find_maximum_minimum( num,(int)sizeof(num)/sizeof(num[0]),&max,&min);
    printf("max=%d\n minm=%d\n",max,min);




}
void find_maximum_minimum(int arr[],int n,int*max,int*min)
{
    int i;
    *max=arr[0];
    *min=arr[0];
    for(i=1;i<n;i++)
    {
       if(*max<arr[i])
       {
        *max=arr[i];
       }
       if(*min>arr[i])
       {
        *min=arr[i];
       }
    }

}

