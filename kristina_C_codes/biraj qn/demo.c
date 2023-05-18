#include<stdio.h>
// void _insert(char *z)
// {
//     z[0]='a';
// }
void main()
{
    // char ch[]={'x','y'};
    // _insert(ch);
    // printf("%c",ch[0]);
    char ch[3][3]={
                       {'*','*','*'},
                       {'*','*','*'},
                       {'*','*','*'}
                                 
                 };
     int i,j;
     for(i=0;i<3;i++)
     {
        for(j=0;j<3;j++)
        {
           printf("%c|",ch[i][j]);
        }
        printf("\n");
        printf("_ _ _\n");
     }            
}