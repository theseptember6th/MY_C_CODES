#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("reading.txt","r");
    if(fp==NULL)
    {
        printf("file has not been sucessfully opened\n ");
        return -1;
    }
    printf("file has sucessfully opened\n");
    int number;
    float PI;
    char character;
    fscanf(fp,"%d %c %f",&number,&character,&PI);
    printf("%d %c %f",number,character,PI);
    if(fp!=NULL)
    {
        fclose(fp);
    }
    return 0;
}