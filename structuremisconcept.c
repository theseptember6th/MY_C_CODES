#include<stdio.h>
#include<string.h>
struct student{
    char names[100];
} s;
void main()
{
    strcpy(s.names,"kristal");
    printf("%s",s.names);
}