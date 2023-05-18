// #include<stdio.h>
#include <geometry.h>
float area;

float Circle(float radius)
{
    
    area=radius*radius*3.14;
    return area;
}
float Rectangle(float length,float breadth)
{
    area=length*breadth;
    return area;
}
float Square(float length)
{
    area=length*length;
    return area;
}