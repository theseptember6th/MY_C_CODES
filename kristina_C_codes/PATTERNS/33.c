#include<stdio.h>
int main()
{
    int i,j;
    int space;
    int x=1;
    for(i=0;i<10;i++)
    {
        for(space=0;space<=9-i;space++)
        {
            printf("  ");
        }
        for(j=0;j<=i;j++)
        {
            if(i==0||j==0)
            {
                x=1;
            }
            else{
                x=x*(i-j+1)/j;  
            }
            printf("%d   ",x);

        }
        printf("\n");
    }
    return 0;
}