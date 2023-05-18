#include<stdio.h>
void main()
{
    int a=2,b=3,c;
    a=b++ + ++b + a;
    b=a++* b-- + a;
    c= --b % a++;
    printf("a=%d\nb=%d\nc=%d\n",a,b,c);
    
}
  // i have done in copy