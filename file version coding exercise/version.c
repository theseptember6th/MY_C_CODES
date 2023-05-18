#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *infile;
    FILE *outfile;
    infile=fopen("version.txt","r");
    if(infile==NULL)
    {
        printf("file cannot be opened\n");
        exit(1);
    }
    outfile=fopen("version.json","w");
    if(outfile==NULL)
    {
        printf("file cannot be opened\n");
        exit(2);
    }
    int major;
    int minor;
    int patch;
    int build;
    fscanf(infile,"%d.%d.%d.%d",&major,&minor,&patch,&build);
    fprintf(outfile,
            "{\n"
            "\t\"major\":%d,\n"
            "\t\"minor\":%d,\n"
            "\t\"patch\":%d,\n"
            "\t\"build\":%d\n"
            "}",
            major,minor,patch,build
    );
    if(infile!=NULL)
    {
        fclose(infile);
    }
    if(outfile!=NULL)
    {
        fclose(outfile);
    }

    return 0;
}