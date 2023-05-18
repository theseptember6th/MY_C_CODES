// PASCALS TRIANGLE
#include<stdio.h>
void main()
{
    int i,j,s;
    int num=1;
    for(i=1;i<=5;i++)
    {
        for(s=1;s<=6-i;s++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        { 
            if(i==1 || j==1)
            {
                num=1;
            }
            else{
                num=num*(i-j+1)/(j-1);
            }
            printf("%d  ",num);

        }
        printf("\n");
    }
}