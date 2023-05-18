#include<stdio.h>
#include<stdlib.h>
struct student{
    int roll;
    char name[50];
    int marks[5];
};
 void main()
{
   struct student s[5]={
    {1,
    "kristal",
    {100,100,100,100,100}
    },

    {2,
    "biraj",
    {90,90,90,90,90} 
    },

    {3,
     "achyut",
     {85,85,85,85,85}
    },

    { 4,
      "pranisha",
      {95,95,95,95,95}
    },

    {5,
      "POoja",
      {70,70,70,70,70}
    }

   };
   FILE *fp;
   fp=fopen("students.dat","wb");
   if(fp==NULL)
   {
    printf("file cannot be opened\n");
    exit(1);
   }
   fwrite(
      s,
      sizeof(struct student),
      5,
      fp
   );
   if(fp!=NULL)
   {
    fclose(fp);
   }

}