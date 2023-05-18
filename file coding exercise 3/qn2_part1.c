#include<stdio.h>
#include<stdlib.h>
struct student{
    int roll;
    char name[50];
    int marks[5];
};
void main()
{  
  struct student s[5];
  FILE*fp=fopen("students.dat","rb");
  if(fp==NULL)
  {
    printf("file cannot be opened\n");
    exit(1);
  }
  fread(
    s,
    sizeof(struct student),
    5,
    fp
  );
  printf("the information of the second student is\n");
  printf("%10s %20s %15s\n ","ROLL","NAME","PERCENTAGE");
  printf("%10d %20s %15.3f",s[2].roll,s[2].name,(s[1].marks[0]+s[1].marks[1]+s[1].marks[2]+s[1].marks[3]+s[1].marks[4])/5.0f);
  

  if(fp!=NULL){
    fclose(fp);
  }



}