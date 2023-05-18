#include<stdio.h>
#define CONSTANT -5
int main()
{
    #if CONSTANT > 0
      printf("positive\n");
    #elif CONSTANT == 0
      printf("zero\n");  
    #else
      printf("not positive\n");
    #endif
   return 0;
}