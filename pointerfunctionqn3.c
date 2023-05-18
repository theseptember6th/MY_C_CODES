//https://www.youtube.com/watch?v=gC_sJqV_v78&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=60
// qn 19.1
#include<stdio.h>
void print_length(char **strings,int n)   // char *strings[]  = **strings
  {
    int i,j;
    for(i=0;i<n;i++)
    {
            for(j=0;*(*(strings+i)+j)!='\0';j++)
         {
              
         }
         printf("%s has %d length\n",*(strings+i),j);
         
        // puts(*(strings+i));
        // printf(" has %d length\n ",strlen(*(strings+i)));   // shortcut 
    }
   
    
}
void main()
{
    char *string[5]={
        "kristal",
        "shrestha",
        "kamala",
        "ganesh",
        "Engineer"
    };
    print_length(string,sizeof(string)/sizeof(string[0]));
}