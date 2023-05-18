#include<stdio.h>
void main()
{
    char choice;
    do{
        printf("hello world\n");
        printf(" Press N to exit");
        scanf("%c",&choice);

    }while(choice!='N' && choice!='n');
}