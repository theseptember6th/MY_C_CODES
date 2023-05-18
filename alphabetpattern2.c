#include<stdio.h>
void main()
{
    char name[8]="BIKALPA";
    int i,j;
    for(i=0;i<=6;i++)
    {
        for(j=0;j<=i;j++)
        {
           if(i%2==0) // if i = even
               {
                     if(j%2!=0)// if j = odd
                        {
                              printf("%c",name[j]+32); // letters must be small
                        }
                     else{
                        printf("%c",name[j]);
                     }   
               }
            else
               {   
                printf("%c",name[j]); // otherwise capital
               }
        }
        printf("\n");
    }
    

}