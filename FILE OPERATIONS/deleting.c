#include<stdio.h>
void main()
{
    if(remove("kristal.txt")!=0)
    {
        printf("file can't be deleted\n");
    }
    else{
        printf("file is sucessfully deleted\n");
    }
}