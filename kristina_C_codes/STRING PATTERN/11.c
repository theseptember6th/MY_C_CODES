#include<stdio.h>
void main()
{
    int i,j;
    char name[]="COMPUTER";
    for(i=0;name[i]!='\0';i++)
    {
      for(j=0;j<=i;j++)
      {
        printf("%c",name[j]);
      }
      printf("\n");
      
    }
}