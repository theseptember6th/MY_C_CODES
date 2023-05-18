#include<stdio.h>
int main()
{
   FILE *file_pointer;
   file_pointer=fopen("C:\\Users\\DELL\\Desktop\\my_c_code\file_handling\file reading and writing\\kristal.txt","a");
   if(file_pointer==NULL)
   {
    printf("file has not opened sucessfully\n");
    return -1;
   }
   printf("file has been sucessfully opened\n");
   if(file_pointer!=NULL)
   {
    fclose(file_pointer);
   }
  return 0;
}