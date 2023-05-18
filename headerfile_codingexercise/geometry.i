# 1 "geometry.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "geometry.c"

# 1 "geometry.h" 1
float Circle(float radius);
float Rectangle(float length,float breadth);
float Square(float length);
# 3 "geometry.c" 2
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
