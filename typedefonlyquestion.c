#include<stdio.h>
struct point{
    double x;
    double y;
};
void main()
{
    struct point p ={10,12};
    char label='A';
    char *comment=" Origin Point";
    printf("%s %c (%lf,%lf)\n",comment,label,p.x,p.y);
}
