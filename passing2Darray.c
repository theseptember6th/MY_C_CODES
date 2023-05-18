// passing matrix and calculating diagonal sum
#include<stdio.h>
int sum_of_diagonal_of_matrix(int mat[3][3]);
void main()
{ 
    //int m,n;

//     printf("enter the row and column of the matrix\n");
//      scanf("%d%d",&m,&n);
//   if(m!=n)
//   {
//     exit(0);
//   }




 int mat[3][3];
  printf("enter the elements of the matrix\n");
  int i,j;
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
        printf("mat[%d] [%d] ==  ",i,j);
        scanf("%d",&mat[i][j]);
        printf("\n");
    }
  }

// int mat[3][3]={
//     {1,2,3},
//     {1,2,3},
//     {1,2,3}
// };

  int sum=sum_of_diagonal_of_matrix(mat);
  
  printf("the sum of the diagonal elements of the matrix is %d ",sum);
  
    


}


int sum_of_diagonal_of_matrix(int mat[3][3])
{
    int i,j;
    int sum=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                sum=sum+mat[i][j];
            }
            
        }
    }
    return sum;
}