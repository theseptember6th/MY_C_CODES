// WAP to insert a string from a specified position of another string  
#include<stdio.h>
#include<string.h>
void main()
{ int p;
  char a[100];
  char b[100];
  char c[100];
  printf("enter the home string\n");
  gets(a);
  printf("enter the outside string\n");
  gets(b);
  printf("enter the postion where to be inserted\n");
 scanf("%d",&p);
   int i,j,k=0;
   
   
   for(i=0;i<p;i++,k++)
   {
    c[k]=a[i];
   }
   for(j=0;b[j]!='\0';j++,k++)
   {
    c[k]=b[j];
   }
   for(i=p;a[i]!='\0';i++,k++)
   {
    c[k]=a[i];
   }


    printf("the resulting string is %s",c);
  


   

   

}