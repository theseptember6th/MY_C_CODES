#include<stdio.h>
#include<stdlib.h>
void main()
{
    int nchar;
    printf("enter the number of characters in string\n");
    scanf("%d",&nchar);
    char *str=( char*)malloc((nchar+1)*sizeof(char)); // +1 for null character('\0')
    if(str==NULL)
    {
        printf("the allocation was unsuccesful\n");
        exit(1);
    }
    printf("enter the string\n");
    scanf("%s",str);
    printf("the string you entered is %s\n",str);
    if(str!=NULL)
    {
        free(str);
    }

}