#include<stdio.h>
#include<stdlib.h>

void hello(int ***matrix )
{ 
   **matrix=malloc(3*sizeof(int*));
   if(matrix==NULL)
   {
      printf("allocation failed\n");
      exit(1);
   }
   int i;
   for(i=0;i<5;i++)
   {
      matrix[i]=(int*)malloc(3*sizeof(int));
      if(matrix[i]==NULL)
      {
         printf("sub matrix allocation failed\n");
         exit(2);
      }
   }
     
}

void main()
{  
   int **x=NULL;
   hello(&x);
   x[2][2]=18;
   printf("%d",x[2][2]);

   
   
}