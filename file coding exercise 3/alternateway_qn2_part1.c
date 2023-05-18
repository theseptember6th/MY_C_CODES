#include<stdio.h>
#include<stdlib.h>
struct student{
    int roll;
    char name[50];
    int marks[5];
};
void main()
{  
  struct student s;
  FILE*fp=fopen("students.dat","rb");
  if(fp==NULL)
  {
    printf("file cannot be opened\n");
    exit(1);
  }
  
  fseek(fp,1*sizeof(struct student),SEEK_SET);
  fread(
    &s,
    sizeof(struct student),
    1,
    fp
  );
  float sum=0;
  int i;
  for(i=0;i<5;i++)
  {
    sum=sum+s.marks[i];
  }
  float percentage=sum/5.0f;
  printf("the percentage is %.4f\n",percentage);

  if(fp!=NULL){
    fclose(fp);
  }



}