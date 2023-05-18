#include<stdio.h>
void multiplication_of_matrix(int matA[3][3],int matB[3][3]);
void main()
{

   int matA[3][3]={
        {1,2,3},
        {1,2,3},
        {1,2,3}


    };
      int matB[3][3]={
        {1,2,3},
        {1,2,3},
        {1,2,3}


    };

    multiplication_of_matrix(matA,matB);


}


void multiplication_of_matrix(int matA[3][3],int matB[3][3])
{
    int i,j,k;
    int sum;
    int matC[3][3];
    // for(i=0;i<3;i++)
    // {
    //     for(j=0;j<3;j++)
    //     {
    //         sum[i][j]=0;
    //     }
    // }


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+matA[i][k]*matB[k][j];
            }
            matC[i][j]=sum;
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",matC[i][j]);
        }
        printf("\n");
    }
}