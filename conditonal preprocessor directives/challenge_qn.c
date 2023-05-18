#include <stdio.h>
#define A 20
#ifdef A 
#define B 10
#undef A
#endif
#define echo(m) printf(m)
#ifndef A
#define A 100
#else
#define A 50
#endif

void main()
{
    #ifndef B
       echo("B is not defined\n");
    #endif
    #if A > 60
       echo("A is greater than 60\n");
    #else
      echo("A is less than 60\n");
    #endif       
}
