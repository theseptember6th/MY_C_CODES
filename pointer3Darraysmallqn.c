#include<stdio.h>

//acessing the last element of the array
void main(){


int array3d[2][3][4]=
{
    {
        {1,2,3,4},
        {7,8,9,0},
        {3,2,1,5}
        

    },
    {
        {5,6,8,5},
        {3,1,45,7},
        {9,7,4,2}
    }
};


printf("%d\n",*(*(*(array3d+1)+2)+3));
}

