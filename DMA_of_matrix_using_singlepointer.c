#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *matrix;
    int m,n;
    printf("enter the rows and columns of the matrix\n");
    scanf("%d%d",&m,&n);
    matrix=(int*)malloc(m*n*sizeof(int));
    int i,j;
    printf("enter the elements of the matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        { 
            scanf("%d",&matrix[n*i+j]);

        }

    }
    if(matrix==NULL)
    {
        printf("allocation failed\n");
        exit(1);
    }

    // printing the elements

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",matrix[n*i+j]);

        }
        printf("\n");
    }
    if(matrix!=NULL)
    {
        free(matrix);
    }
    
}