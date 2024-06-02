#include<stdio.h>
void main()
{
    int s,i,j,k;
    for(i=1;i<=4;i++)
    {  
        for(s=1;s<=4-i;s++)
        {
            printf("  ");  // 2 spaces
        }
        for(j=i;j<=2*i-1;j++)
        {
            
            printf("%d ",j);       // 1 space
            
        }
        
        for(k=2*i-2;k>=i;k--)
        {
            printf("%d ",k);       // 1 space
        
        }
        
        printf("\n");
    }
}