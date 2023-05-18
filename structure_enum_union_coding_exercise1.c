#include<stdio.h>
//https://www.youtube.com/watch?v=sKJqLwbvjr4&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=72
//qn 22.2
struct person{
    char name[20];
    struct person *F;

};

void main()
{
    struct person grandson={"kristal",NULL};
    struct person father={"Ganesh",NULL};
    struct person grandfather={"dal",NULL};
   grandson.F=&father;
   father.F=&grandfather;
   struct person *p;
   p=&grandson;
   printf("%-20s :%s\n","GRANDSON NAME",p->name);
   printf("%-20s :%s\n","FATHER NAME",p->F->name);
   printf("%-20s :%s\n","GRANDFATHER NAME",p->F->F->name);
   




}