#include<stdio.h>
struct complex{
    double real;
    double img;
} c1={1,2},c2={3,4};

struct complex multiplication(struct complex c1,struct complex c2)
{
    struct complex multiplication;
    multiplication.real=(c1.real*c2.real)-(c1.img*c2.img);
    multiplication.img=(c1.real*c2.img)+(c1.img*c2.real);
    return multiplication;
    
    
}
void print(struct complex n)
{
    printf("the multipication is %.3lf+i%.3lf\n",n.real,n.img);
}
void main()
{
    struct complex result;
   result= multiplication(c1,c2);
   print(result);

}
