#include<stdio.h>
enum COLOR{
    WHITE,
    BLACK,
    PINK,
    BROWN,
    SKIN=18,
    };

    void main()
    {
        enum COLOR c=SKIN;
        printf("%d\n",c);
    }