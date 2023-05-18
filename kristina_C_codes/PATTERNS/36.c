#include<stdio.h>
int main()
{
    int i,j,k;
    int x;
    int space;
    for(i=1;i<=4;i++)
    {
        for(space=1;space<=4-i;space++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
         if(i!=1){
            x=i-1;
            for(k=i-1;k>=1;k--)
            {  
              printf("%d",x);
              x=x-1;
            }
         }
        printf("\n");

    }

    return 0;
}