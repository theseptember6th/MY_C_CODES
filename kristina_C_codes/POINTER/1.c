#include<stdio.h>
// * = indirection operator
void main()
{
    int x=15;
    int y=5;
     int *z;
     int *w;
     w=&y;
     z=&x;
    printf("%d\n",z);  // address of x
    printf("%d\n",*z);  // adress of x == z    * == it means value print garr tyo address ma gayera
    printf("%d\n",&z);
    printf("the sum is %d",(*z)+(*w));

}