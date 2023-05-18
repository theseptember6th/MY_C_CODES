#include<stdio.h>
#include <stdlib.h>
 //this #include <stdlib.h> contains abs function  i.e absolute value function
#include<math.h>
//contains all other mathematical functions except absolute value one


 void main()
 {
 /*   
    int a= abs(-10);
    printf("%d",a);
 */


// some math functions


 printf("abs(-10)=%d\n",abs(-10)); // always integer haii
 printf("sqrt(144)=%f\n",sqrt(144));
 printf("cbrt(125)=%f\n",cbrt(125));
 printf("pow(2,3)=%f\n",pow(2,3));// 2^3
 printf("sin(2.3)=%f\n",sin(2.3)); // must be in radian format
 printf("asin(0)=%f\n",asin(0)); // inverse of sin
 printf("exp(2)=%f\n",exp(3)); // for exponential function
 printf("log(2)=%f\n",log(2)); // logarithm of base e
 printf("ceil(4.2)=%f\n",ceil(4.2)); // ceil (ceiling) gives higher integer than 4 for this qn ie 5
 printf("floor(4.2)=%f\n",floor(4.2)); // floor means lower integer than 4  for this qn ie 4
 printf("round(4.2)=%f\n",round(4.2));//round off garxa
 printf("truncate(4.2)=%f",trunc(4.2));//trunc shows only the integer and not decimals without rounding
 printf("fmax(3,2)=%f\n",fmax(3,2)); //maximum betn 2 numbers
 printf("fmin(3,2)=%f\n",fmin(3,2)); //minimum betn 2 numbers
 
 }   
 
 

