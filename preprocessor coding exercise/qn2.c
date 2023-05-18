//https://www.youtube.com/watch?v=LKO4ij_-sPU&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=86
// qn .1
#include<stdio.h>
#include<string.h>
#ifdef DEBUG
   #ifndef __APPLE__
    #define __APPLE__
   #endif
   #ifdef _WIN64 
    #undef _WIN64
   #endif
   #ifdef _WIN32
    #undef _WIN32
   #endif
#endif
void main()
{
   char username[100]="";
   char home[100]="";
   printf("enter the username\n");
   scanf("%s",username);

    #if defined(_WIN32) || defined(_WIN64)
      strcat(home,"C:\\USERS\\");
      strcat(home,username);   //home ma chai username jod vaneko
    #endif

     #ifdef __APPLE__
     strcat(home,"/USERS/");
      strcat(home,username);  
    #endif

    #ifdef __Linux__
     strcat(home,"/home/");
      strcat(home,username);  
    #endif

    printf("%s\n",home);
    

    
}