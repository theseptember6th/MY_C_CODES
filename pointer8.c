//https://www.youtube.com/watch?v=VJc0--syviI&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=57
//qn 18.2
#include<stdio.h>
void reverse(char *string)
{
   int i,n;
   char temp;
   for(n=0;*(string+n)!='\0';n++);
   for(i=0;i<n-1-i;i++)
   {
     temp=*(string+i);
     *(string+i)=*(string+n-1-i);
     *(string+n-1-i)=temp;
   }
  
}
void main()
{
    char str[]="kristal";
    reverse(str);
    printf("the reverse string is\n");
    puts(str);
}
