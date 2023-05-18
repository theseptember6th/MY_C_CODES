#include<stdio.h>
int main()
{
    int i,j;
    int space;
    int x=1;
    for(i=1;i<=4;i++)
    {
        for(space=1;space<=4-i;space++)
          {
               printf("  ");
          }
               for(j=1;j<=i;j++)
               {
                printf("%d   ",x);
                x=x+1;
               }
    printf("\n");
        
    }
    return 0;
}