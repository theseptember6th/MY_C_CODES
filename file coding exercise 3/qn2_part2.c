#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    int roll;
    char name[50];
    int marks[5];
};
void main()
{
  struct student s[5];
  FILE*fp=fopen("students.dat","r+b");
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
  
  strcpy(s[3].name,"Myrcella");
  rewind(fp);
  int i;
  for(i=0;i<5;i++)
  {
    printf("%s\n",s[i].name);
  }
  if(fp!=NULL)
  {
    fclose(fp);
  }
  

}