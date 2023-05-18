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
    fp=fopen("student.dat","wb");
    if(fp==NULL)
    {
        printf("file cannot be opened\n");
        exit(1);
    }
    int i,j;
      for(i=0;i<3;i++)
    {
        printf("entering the data of the student %d\n",i+1);
        printf("enter the roll number of the student\n");
        scanf("%d",&s[i].roll);
        printf("enter the name of the student\n");
        scanf("%s",s[i].name);
        printf("enter the marks in 5 subjects\n");
        for(j=0;j<5;j++)
        {
        
            scanf("%d",&(s[i].marks[j]));
        }
        
        
    }
     fwrite(
           s,
        sizeof(struct student),
        3,
        fp

    );

    if(fp!=NULL)
    {
        fclose(fp);
    }

   
}

