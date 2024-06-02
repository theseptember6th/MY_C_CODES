#include<stdio.h>
struct complex{
    double real;
    double img;
} c1={1,2},c2={3,4};

struct complex add(struct complex c1, struct complex c2)
{
    struct complex res;
    res.real=c1.real+c2.real;
    res.img=c1.img+c2.img;
    return res;
} 
void print(struct complex n)
{
    printf("sum of the complex number is %.2lf+i%.2lf\n",n.real,n.img);

}
void main()
{
    struct complex result;
    result=add(c1,c2);
    print(result);

}
