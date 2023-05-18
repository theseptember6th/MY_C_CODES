#include<stdio.h>

#include<stdlib.h>
void main()
{
    FILE*fp=fopen("paragraph_qn1.txt","r");
    if(fp==NULL)
    {
        printf("file cannot be opened\n");
        exit(1);
    }
    // char ch;
    // while((ch=fgetc(fp))!=-1)
    // {

    // }
    //     int x=ftell(fp);
    //     fseek(fp,x-1,SEEK_SET);
    //     char y=fgetc(fp);
    //     printf("last character is %c\n",y);

    fseek(fp,-1,SEEK_END);
    printf("the last character is %c\n",fgetc(fp));

      if(fp!=NULL)
      {
        fclose(fp);
      }  
    

}