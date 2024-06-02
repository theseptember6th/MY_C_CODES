//https://www.youtube.com/watch?v=uwun-tvDm_Q&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=65
// qn.20.1

#include<stdio.h>
#include<math.h>
struct vector{
    double x;
    double y;
    double z;
}v1={1,2,3},v2={4,5,6};
struct vector add(struct vector v1,struct vector v2)
{
    struct vector sum;
    sum.x=v1.x+v2.x;
    sum.y=v1.y+v2.y;
    sum.z=v1.z+v2.z;
    return sum;
}
double magnitude(struct vector n)
{
   double value;
   value=sqrt(pow(n.x,2)+pow(n.y,2)+pow(n.z,2));
   return value;

}
double dot_product(struct vector v1,struct vector v2)
{
      double dotP=(v1.x*v2.x+v1.y*v2.y+v1.z*v2.z);
      return dotP;
}
void print_vector(struct vector v1,struct vector v2)
{
    printf("first vector is %.3lfx+%.3lfy+%.3lfz\n",v1.x,v1.y,v1.z);
    printf("second vector is %.3lfx+%.3lfy+%.3lfz\n",v2.x,v2.y,v2.z);

}
void main()
{
    struct vector sum;
    sum=add(v1,v2);
    printf("sum is %.3lfx+%.3lfy+%.3lfz\n",sum.x,sum.y,sum.z);
    double value=magnitude(v1);
    printf("the magnitude is %.3lf\n",value);
    double product=dot_product(v1,v2);
    printf("dot product is %.3lf\n",product);
    print_vector(v1,v2);

}