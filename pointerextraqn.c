//QN 17.2 FROM BIKALPA CODES
//https://www.youtube.com/watch?v=avNfk-Igl4Q&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=52
#include<stdio.h>
int *largest(int arr[],int n)
{
    int *maxm = &arr[0];
    int i;
  for(i=1;i<n;i++)
  {
    if(*maxm<arr[i])
    {
        maxm=&arr[i];
    }
    
  }
  return maxm;
}

int *central( int array[],int n)
{
    // int i,j,temp;
    // for(i=0;i<n;i++)
    // {
    //     for(j=i+1;j<n;j++)
    //     {
    //         if(array[i]>array[j])
    //         {
    //             temp=array[i];
    //             array[i]=array[j];
    //             array[j]=temp;
    //         }
    //     }
    // }
    int midpos=n/2;
    return &array[midpos-1];
}
void swap(int *largest,int*central)
{
    int temp;
    temp=*largest;
    *largest=*central;
    *central=temp;
    
}
void main()
{
    int num[]={10,15,17,12,13,19};
    int*maxm;
    int*mid;
    maxm=largest(num,(int)sizeof(num)/sizeof(num[0]));
    mid=central(num,(int)sizeof(num)/sizeof(num[0]));
    swap(maxm,mid);
    printf("mid=%d\n",*mid);
    printf("max=%d\n",*maxm);



}