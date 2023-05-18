#include<stdio.h>
#include<stdlib.h>
struct student{
    int roll;
    char name[100];
    int marks[5];

};

void main()
{
    struct student s[3];
    FILE *fp;
    fp=fopen("student.dat","rb");
    if(fp==NULL)
    {
        printf("file cannot be opened\n");
        exit(1);
    }
   
    fread(
            s,
            sizeof(struct student),
            3,
            fp
        );
    printf("%10s %20s %15s\n","ROLL","Name","Percentage");
    for(int i=0;i<3;i++)
    {
        printf("%10d %20s %15f\n",s[i].roll,s[i].name,(s[i].marks[0]+s[i].marks[1]+s[i].marks[2]+s[i].marks[3]+s[i].marks[4])/5.0f);
        
        
    }
    if(fp!=NULL)
    {
        fclose(fp);
    }
}