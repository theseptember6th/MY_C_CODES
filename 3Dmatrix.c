// you are given two matrix..store them in 3D matrix and print their addition result in matrix form
#include <stdio.h>
void main()
{
    // int matA[3][4]={
       
    //    {1,0,-1,4},
    //    {2,8,11,-2},
    //    {4,5,0,0}

    // };
    
    // int matB[3][4]={

    //     {-1,10,1,3},
    //     {5,5,5,5},
    //     {14,5,0,1}
        
    // };



    // to store this matrixes in a 3D array
     //  2 matrix each having 3 rows and 4 columns
     int matK[2][3][4]={
      {
        {1,0,-1,4},
        {2,8,11,-2},
        {4,5,0,0},
     },
     {
         {-1,10,1,3},
         {5,5,5,5},
         {14,5,0,1},
         


     }
     };


     // adding two matrixes

     int i,j,p,sum[3][4];
     
        for(i=0;i<3;i++)
        {
            for(j=0;j<4;j++)
            {
                sum[i][j]= matK[0][i][j]+matK[1][i][j];  
            }
        }
     

     printf("the result of addition of these matrices is\n");
     for(i=0;i<3;i++)
     {
        for(j=0;j<4;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
     }
     
     


}