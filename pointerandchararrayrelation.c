#include<stdio.h>

int length(char*arr){    // equivalent to      int length(char arr[])
 int count=0;
 for(count=0;*(arr+count)!='\0';count++);    // for(count=0;arr[count]!='\0';count++)
 return count;
}


void main()
{
    char *s="kristal"; // equivalent to        char s[]="kristal"
 int count=length( s);
 printf("count=%d\n",count);

}