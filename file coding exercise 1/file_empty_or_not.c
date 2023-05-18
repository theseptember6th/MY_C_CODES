#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("kristal.txt","r");
    if(fp==NULL)
    {
        printf("file cannot be opened\n");
        return -1;
    }
    char ch= fgetc(fp);
     if(ch==-1)
     {
        printf("file is empty\n");
        return -1;
        
     }
     
        printf("file is not empty\n");


    return 0;
}