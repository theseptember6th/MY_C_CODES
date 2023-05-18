#include<stdio.h>
int main()
//display pattern like stars
{
    int i,j;
    for(i=0;i<3;i++) //ROW
    {
        for(j=0;j<=i;j++) //COLUMN
        {
           printf("* ");
        }
        printf("\n");
    
    
    }
    

    return 0;
}