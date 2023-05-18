#include<stdio.h>
void addition__(int *x ,int *y,int*add)
{
   (*add)=(*x)+(*y);   // sum ko value = w ko value + z ko value
   
} 


int main()
{
    int w=5;
    int z=2;
    int sum;
    addition__(&w,&z,&sum);
    printf("the sum is %d",sum);
    return 0;
}