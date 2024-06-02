#include<stdio.h>
#include<string.h>
void main()
{
    
    char string1[100];
    char string2[100];
    printf("enter the string");
    scanf("%s",string1);
    int length=strlen(string1);
    int i,flag,value;
    for(i=0;i<length;i++)
    {
       string2[i]=string1[(length-1)-i];
    }
    printf("%s\n",string2);
    value=strcmp(string1,string2);

    if(value==0)
    {
        printf("it is palindrome");
        
    }
    else{
        printf("it is not palindrome");
    }
    
}