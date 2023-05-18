#include<stdio.h>
struct student{
    float height;
    float weight;
    int age;
};
int main()
{
    struct student kristal={5.8,65,20};
    FILE *fp;
    fp=fopen("kristal.bin","wb");
    if(fp==NULL)
    {
        printf("file cannot be opened\n");
        return -1;
    }
    fwrite(
        &kristal,
        sizeof(struct student),
        1,
        fp

    );
    if(fp!=NULL)
    {
        fclose(fp);
    }
    return 0;
}