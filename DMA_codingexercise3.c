#include<stdio.h>
#include<stdlib.h>
void main()
{
    
    int **matrix;
    int row,column;
    printf("enter the rows and columns\n");
    scanf("%d%d",&row,&column);
    matrix=(int**)malloc(row*sizeof(int*));
    if(matrix==NULL)
    {
        printf("allocation was failed\n");
        exit(0);
    }
    int i,j;
    for(i=0;i<row;i++)
    {
        matrix[i]=(int*)malloc(column*sizeof(int));
        if(matrix[i]==NULL)
        {
            printf("allocation was failed\n");
            exit(1);
        }
    }
      printf("enter the elements of the matrix\n");
      for(i=0;i<row;i++)
      {
        for(j=0;j<column;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
      }
      int count=0;
      for(i=0;i<row;i++)
      {
        for(j=0;j<column;j++)
        {
            if(matrix[i][j]==0)
            {
                count=count+1;
            }
        }
      }
      printf("there are %d zero elements in the given matrix\n",count);
      for(i=0;i<row;i++)
      {
        if(matrix[i]!=NULL)
        {
            free(matrix[i]);
        }
      }
      if(matrix!=NULL)
      {
        free(matrix);
      }
      
    
}