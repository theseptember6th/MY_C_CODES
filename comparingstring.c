#include<stdio.h>
#include<string.h> // string palindrome
void main()
{
  char string1[100];
  char string2[100];
  printf("enter the strings");
  fgets(string1,100,stdin);
  fgets(string2,100,stdin);

  int n;
  n=strcmp(string1,string2);
  if(n==0)
  {
    printf("entered strings are palindrome");

  }
  else{
    printf("entered string is not palindrome");
  }
  }