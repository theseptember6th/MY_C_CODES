#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    float a,b,c;
    float x1,x2,D;
  printf("enter the values of a,b and c in ax^2+bx+c: ");
  scanf("%f%f%f",&a,&b,&c);
  D=b*b-4*a*c;
  if(D < 0)
  {
    printf("roots are imaginary");
  }
  else
  {
    D=sqrt(D);
    x1= (-1*b+D)/(2*a);
    x2=(-1*b-D)/(2*a);
    printf("the roots are x1= %.2f\t x2=%.2f\t",x1,x2);
  }
}