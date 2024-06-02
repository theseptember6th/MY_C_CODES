#include<stdio.h>
void main()
{
    int matA[2][2],matB[2][2],matC[2][2];
    int i,j,sum=0;
    printf("enter the elements of the matrix");
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("matA[%d][%d] = ",i,j);
            scanf("%d",&matA[i][j]);
        }
    }   



        for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("matB[%d][%d] = ",i,j);
            scanf("%d",&matB[i][j]);
        }
    }
    


    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            matC[i][j]=matA[i][j]+matB[i][j];
        }
    }



    printf("the result of  the sum of the matrix is \n");


    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d  ",matC[i][j]);
        }
        printf("\n");
    }

}