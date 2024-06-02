#include<stdio.h>
#include<string.h>
void main()
{
    char string[100];
    printf("enter the string");
    scanf("%s",string);
    int i,vowel=0;
    for(i=0;string[i]!='\0';i++)
    {
        if(string[i]=='a' || string[i]=='e' ||string[i]=='i'|| string[i]=='o' ||string[i]=='u')
        {
            vowel=vowel+1;
        }
    }
    printf("the  no of vowels in the given string is %d",vowel);
}