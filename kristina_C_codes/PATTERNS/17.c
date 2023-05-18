#include<stdio.h>
int main()
{
    int i;
    int j;
    int space;
    for(i=1;i<=4;i++)
    {
        for(space=1;space<=4-i;space++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d   ",i);
        }
        printf("\n");
    }
    
    return 0;
}
