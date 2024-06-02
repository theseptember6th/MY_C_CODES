#include<stdio.h>
#include<stdlib.h>
int length(char s[])
{
    int i;
    for(i=0;s[i]!='\0';i++)
    {

    }
    return i;
}
char *join(char*str1,char*str2)
{
     int i,j;
    int x= length(str1);
    int y=length(str2);
    char *newstr=(char *)malloc((x+y+1)*sizeof(char));
    for(i=0;i<x;i++)
    {
        newstr[i]=str1[i];
    }
   
    for(j=0;j<y;j++,i++)
    {
        newstr[i]=str2[j];
    }
    newstr[i]='\0';
    return newstr;
     
}
void main()
{
    char *str1="kristal";
    char *str2="shrestha";
    char *newstr=join(str1,str2);
    puts(newstr);
    if(newstr!=NULL)
    {
        free(newstr);
    }



}