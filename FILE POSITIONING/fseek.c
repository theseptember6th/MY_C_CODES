#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    fp=fopen("sample_fseek.txt","r+");
     if(fp==NULL)
    {
        printf("file cannot be opened\n");
        exit(1);
    }
    //seeking to 31st position
    fseek(fp,30,SEEK_SET);
    fprintf(fp,"20");
    
    
    if(fp!=NULL)
    {
        fclose(fp);
    }
}