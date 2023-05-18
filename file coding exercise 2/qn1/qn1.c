#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main()
{
    FILE *infile;
    FILE *outfile;
    infile=fopen("lines.txt","r");
    if(infile==NULL)
    {
        printf("source file cannot be opened\n");
        exit(1);
    }
    outfile=fopen("capitalized.txt","w");
    if(outfile==NULL)
    {
        printf("destination file cannot be opened\n");
        exit(2);
    }
    
  char line[100];
    
    while(fgets(line,100,infile)!=NULL)
    { 
        if(strlen(line)>0)
        {
            if(line[0]>='a' && line[0]<='z')
            {
                line[0]=line[0]-32;
            }
        }
        fputs(line,outfile);
        
    }



    if(infile!=NULL)
    {
        fclose(infile);
    }
    if(outfile!=NULL)
    {
        fclose(outfile);
    }
}