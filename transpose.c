#include<stdio.h>
void main()
{ 
    int m,n,i,j;
    printf("enter the rows and columns of the matrix");
    scanf("%d %d",&m,&n);

    int mat[m][n];
    
    //taking input
 printf("enter the elements of the matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }


 for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           printf("%d\t",mat[j][i]);
        }
        printf("\n");
    }

    

}