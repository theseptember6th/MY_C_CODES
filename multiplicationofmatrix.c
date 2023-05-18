#include<stdio.h>
int main()
{
    int m,n,p,q,i,j,k,sum;
    printf("enter the row and column of the first matrix A");
    scanf("%d %d",&m,&n);
    printf("enter the row and column of the second matrix B");
    scanf("%d %d",&p,&q);

    int matA[m][n],matB[p][q],matC[m][q]; 


    if(n!=p)
    {
       printf("matrix cannot be multiplied");
       return -1;
    }

   printf("enter the elements of first matrix ");

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("matA[%d][%d] = ",m,n);
            scanf("%d",&matA[i][j]);
        }
    }



    printf("enter the elements of second matrix ");

    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("matB[%d][%d] = ",p,q);
            scanf("%d",&matB[i][j]);
        }
    }
    

    for(i=0;i<m;i++)     // first matrix row
    {
        for(j=0;j<q;j++)   // second matrix column
        {
            sum=0;
            {
                for(k=0;k<p;k++)   // changing variables of rows and columns
                {
                    sum=sum+matA[i][k]*matB[k][j];
                }
            }
            matC[i][j]=sum;
        }
    }


    printf("printing the multiplication result of A*B");

    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t", matC[i][j]);

        }
        printf("\n");
    }
    

    return 0;
}