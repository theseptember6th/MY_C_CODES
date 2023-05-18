#include<stdio.h>
void main()
{
  int num[]={5,6,7,8,9,10};
  int (*ptr)[6];
  ptr=&num;      // stroing an entire array to  the pointer
printf("%d\n",num);
printf("%d\n",ptr);
printf("%d\n",(num+1));
printf("%d\n",ptr+1);

}