#include<stdio.h>
struct video{
    char title[100];
    char format[20];
};
void main()
{
    printf("%d\n",sizeof(int ));
    printf("%d\n",sizeof(double ));
    printf("%d\n",sizeof(struct video ));


    printf("%d\n",sizeof(int* ));
    printf("%d\n",sizeof(double* ));
    printf("%d\n",sizeof(struct video *));

    printf("%d\n",sizeof(void *));

    int count=90;
    struct video v1={"tutorial in nepali","mp4"};
    void *generic_pointer=NULL;  // NULL is similar LIKE integer 0 but not exactly that
    generic_pointer=&count;
    printf("count =%d\n",*((int*)generic_pointer));

    generic_pointer=&v1;
    printf("format=%s\n",((struct video *)generic_pointer)->format);


}