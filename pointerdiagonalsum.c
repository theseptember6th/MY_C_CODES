//https://www.youtube.com/watch?v=VJc0--syviI&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=57
//qn 18.3
#include<stdio.h>
void diagonal_sum(int (*mat)[3],int n)
{
    int i,j;
    int sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                sum=sum+*(*(mat+i)+j);
            }
        }
    }
    printf("sum is %d\n",sum);
}
void main()
{
    int mat[3][3]=
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    diagonal_sum(mat,3);

}
