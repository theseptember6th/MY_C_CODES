#include<stdio.h>
#include<stdlib.h>
void main()
{
    int m,n,i,j;
    printf("enter the rows and columns of the matrix\n");
    scanf("%d%d",&m,&n);
    int **matrix;

    // ALLOCATING THE MATRIX
    matrix=(int **)malloc(m*sizeof(int*));    // DECLARING
    if(matrix==NULL)
    {
        printf("the allocation failed\n");
        exit(1);
    }
    for(i=0;i<m;i++)                          //ALLOCATING EACH ROW ARRAY OF LENGTH OF COLUMN
    {
        matrix[i]=(int*)malloc(n*sizeof(int));
        if(matrix[i]==NULL)
        {
            printf("the allocation failed\n");
            exit(1);
        }
    }
     printf("enter the elements of the matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",(*(matrix+i)+j));  // &matrix[i][j];
        }
    }

                                                        //[printing the matrix]
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
            printf("%d\t",*(*(matrix+i)+j));      // matrix[i][j]
        }
        printf("\n");
     }
                                      
                                                  // DEALLOCATING THE MATRIX

       for(i=0;i<m;i++)
       {
        if(matrix[i]!=NULL)                     // DEALLOCATING EACH ROW ARRAY
        {
            free(matrix[i]);
        }
       }        

       if(matrix!=NULL)                         //  CHECKING AND DEALLOCATING THE WHOLE MATRIX
       {
        free(matrix);
       }                                   
}