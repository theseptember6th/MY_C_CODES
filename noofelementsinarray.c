#include<stdio.h>
void main()
{
    int array[10];

    int size = sizeof(array)/sizeof(array[0]); // to check the no of elements
    printf("%d",size);
}