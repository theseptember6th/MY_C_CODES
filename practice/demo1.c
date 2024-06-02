#include <stdio.h>
#include <stdlib.h>

void hello(int ***matrix)
{
    int row = 3, column = 3;
   * matrix = (int **)malloc(row * sizeof(int *));
    if (matrix == NULL)
    {
        printf("allocation failed\n");
        exit(1);
    }
    int i;
    for (i = 0; i < row; i++)
    {
        (*matrix)[i] = (int *)malloc(column * sizeof(int));
        if (matrix[i] == NULL)
        {
            printf("sub matrix allocation failed\n");
            exit(1);
        }
    }
}

void main()
{
    int **x = NULL;
    hello(&x);
    x[2][2] = 18;
    printf("%d", x[2][2]);
}