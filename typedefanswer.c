#include<stdio.h>
typedef double db;
typedef char ch;
typedef char *c;
typedef struct{
    db x;
    db y;
} point;
void main()
{
   point z={10,12};
   ch label='A';
   c comment="Origin Point";
       printf("%s %c (%lf,%lf)\n",comment,label,z.x,z.y);
   

}