// if we dont want array to get changed in sub function then we need to do this
#include<stdio.h>
int sum(const int arr[],int); // making array read only and no any edits
void main()
{
    int numbers[]={1,2,3,4,5,6,7,8,9};
    int result = sum(numbers,(int)sizeof(numbers)/sizeof(numbers[0]));   // ARRAY PATHAKO WITH ITS NO OF ELEMENTS IN ARRAY
    printf("the sum is %d \n",result);
    printf(" numbers[0]=%d\n",numbers[0]); // ( 3)  will change the original array itself 
}


int sum(const int arr[],int n)    //   (1) int arr[]  == here adress of first array of numbers array is passed and not copied value 
{
    int i;
   int result=0;
    for(i=0;i<n;i++)
    {
        result=result+arr[i];
    }
    arr[0]=-99;      // (2)  so it is like call by address and changing it 
    return result;
}