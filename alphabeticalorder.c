#include <stdio.h>
#include<string.h> 
//  ALPHABETICAL ORDER OF LIST OF NAMES GIVEN BY THE USER USING STRCMP AND STRCPY FUNCTION.
void main()
{ 
    int x;
printf("enter the no of persons");
scanf("%d",&x);
    char names[x][10];
    char temp[x][10];
    printf("enter the name of the persons\n");
    int i,j;
    for(i=0;i<x;i++)
    {
        scanf("%s",names[i]);
    }

    //comparing strings
    for(i=0;i<x;i++)
    {
        for(j=i+1;j<x;j++)
        { 
           if(strcmp(names[i],names[j])>0)
           { // SWAPPING
              strcpy(temp[i],names[i]);
              strcpy(names[i],names[j]);
              strcpy(names[j],temp[i]);


           }
          
        }
    }
 printf("list of names in alphabetical order\n");
     for(i=0;i<x;i++)
           {
            printf("%s\n",names[i]);
           }

    
}