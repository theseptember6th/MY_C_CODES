//https://www.youtube.com/watch?v=LKO4ij_-sPU&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=86
// qn .1

#include<stdio.h>
#define MAXM(x,y) (x)>(y)?(x):(y)
#ifdef DEBUG
   #ifndef __cplusplus
     #define __cplusplus
   #endif 
#endif    

void main()
{
    int x,y;
    printf("enter two numbers\n");
    scanf("%d%d",&x,&y);
    printf("the greater number is %d\n",MAXM(x,y));
    #ifdef __cplusplus
     printf("you are using C++ compiler\n");
    #endif 

    
}