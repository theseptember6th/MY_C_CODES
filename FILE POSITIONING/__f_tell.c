#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    fp=fopen("sample.txt","a");
     if(fp==NULL)
    {
        printf("file cannot be opened\n");
        exit(1);
    }
                                                        // char ch=fgetc(fp);
                                                        // ch=fgetc(fp);
                                                        // ch=fgetc(fp);
                                                        // ch=fgetc(fp);
                                                        // ch=fgetc(fp);
                                                        // ch=fgetc(fp);
     
     printf("the position of the cursor is %ld\n", ftell(fp));
    
    if(fp!=NULL)
    {
        fclose(fp);
    }
}