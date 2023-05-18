#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("simple.txt","w");
    if(fp==NULL)
    {
        printf("file cannot be opened sucessfully\n");
        return -1;
    }
    fprintf(fp,"%d %f %c",100,2.4,'A');
    if(fp!=NULL)
    {
        fclose(fp);
    }
    return 0;
}