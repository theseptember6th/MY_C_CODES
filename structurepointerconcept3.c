#include<stdio.h>
struct Somestruct{
    int foo;
    char bar[100];
};
void main()
{
    struct Somestruct x={10,"kristal"};
    struct Somestruct *y;
    y=&x;
    printf("%d\n",(*y).foo);
    printf("%d\n",y->foo);  // both same thing
}