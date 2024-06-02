#include<stdio.h>
 
 int length_of_string(char string[]);
 
  // while passing string it is not necessary to pass the its size because we can 
 // determine it by string[i]!='\0 soo ....



 void main()
 {
    char string[100];
   printf("enter the string\n");
   scanf("%s",string);
   int length=length_of_string(string);


   printf("the length of the string is %d\n",length);
 }

 int length_of_string(char string[])
 {
    int i;
    for(i=0;string[i]!='\0';i++)
    {

    }
    return i;
 }