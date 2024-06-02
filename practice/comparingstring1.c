#include<stdio.h>

void main()
{
   int i,k;
   char string1[100];
  char string2[100];
  printf("enter the strings");
  fgets(string1,100,stdin);
  fgets(string2,100,stdin);
  for(i=0;string1[i]!='\0' || string2[i]!='\0';i++)
  {
    if(string1[i]!=string2[i])
    {
         k==0;
         break;
    }
  }
  if(k==0)
  {
    printf("it is not  palindrome");

  }
  else{
    printf(" palindrome");
  }

}