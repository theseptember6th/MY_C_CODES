#include<stdio.h>
//https://www.youtube.com/watch?v=sKJqLwbvjr4&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=72
// qn 22.1
enum tvtype{LCD,LED,CRT};
struct Television{
    char name[20];
    enum tvtype type;
    int year;
};

void display(const struct Television *x)
{
    printf("\n\n\n");
    printf("TV details\n");
    printf("%-20s : %s\n","Name",x->name);
    //printf("name of the television is %s\n",x->name);
    printf("%-20s :","type");
    switch(x->type)
    {
         case LCD:
         {
             printf(" LCD\n");
             break;
         }
         case CRT:
         {
            printf(" CRT\n");
           // printf("this TV can be hamrful for your eyes\n");
            break;
         }
         case LED:
         {
            printf("LED\n");
            break;
         }
         default:
         {
           break;
         }
    }
    
    printf("%-20s : %d\n","manufactured year",x->year);
    if(x->type==CRT)
    {
        printf("this TV can be harmful for your eyes\n");
    }

}

void swap(struct Television *n,struct Television *w)
{
    int temp;
    temp=n->year;
    n->year=w->year;
    w->year=temp;
}
void main()
{
    struct Television x={"sony",LCD,1999};
    struct Television y={"samsung",CRT,1985};
    struct Television *z;
    struct Television *a;
    z=&x;
    a=&y;
    display(z);
    display(a);
    swap(z,a);
    display(z);
    display(a);


}