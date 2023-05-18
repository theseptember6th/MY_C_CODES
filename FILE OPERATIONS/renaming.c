#include<stdio.h>
void main()
{
    if(rename("hero.txt","kristal.txt")!=0)
    {
        printf("file can't be renamed\n");
    }
    else{
        printf("file is sucessfully renamed\n");
    }
}