#include<stdio.h>
struct student{
    float height;
    float weight;
    int age;
};

int main()
{
  struct student shrestha;
  FILE *fp;
  fp=fopen("kristal.bin","rb");
  if(fp==NULL)
  {
    printf("file cannot be opened\n");
    return -1;
  }
  fread(
    &shrestha,
    sizeof(struct student),
    1,
    fp
  );
  
  printf("height:%f weight:%f age;%d\n ",shrestha.height,shrestha.weight,shrestha.age );
  if(fp!=NULL)
  {
    fclose(fp);
  }

}