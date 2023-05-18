#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("reading.txt","r");
    if(fp==NULL)
    {
      printf("file cannot be opened\n");
      return -1;
    }
    printf("file has been sucessfully opened\n");
    char ch=fgetc(fp);
    while(ch!=-1)
     {
        printf("%c",ch);
        ch=fgetc(fp);
     }
    return 0;
}