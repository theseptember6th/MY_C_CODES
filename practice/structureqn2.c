#include<stdio.h>
struct person{
    int age;
    char name[100];
    char gender[5];
    double salary;
}persons;
struct person create_person(struct person n)
{
    printf("enter the age of the person\n");
    scanf("%d",&n.age);
    printf("enter the name of the person\n");
    scanf("%s",&n.name);
    //gets(n.name);
    printf("enter the gender\n");
    scanf("%s",&n.gender);
    printf("enter the salary\n");
    scanf("%lf",&n.salary);
    return n;

}
void print_person(struct person x)
{
    printf("AGE OF THE PERSON IS%d\n",x.age);
    printf("NAME OF THE PERSON IS %s\n",x.name);
    printf("THE PERSON'S GENDER IS %s\n",x.gender);
    printf("SALARY OF THE PERSON IS %.3lf\n\n\n",x.salary);
}
double average(struct person a,struct person b)
{
    double avg=(a.salary+b.salary)/2;
    return avg;
}
struct person richer(struct person a,struct person b)
{
        if(a.salary>b.salary)
        {
            return a;
        }
        else{
            return b;
        }
}
void main()
{
    struct person first;
    struct person second;
    struct person rich;
    first=create_person(persons);
    second=create_person(persons);
    print_person(first);
    print_person(second);
    double avg=average(first,second);
    printf("the average salary is %.3lf\n\n",avg);
    rich=richer(first,second);
    printf("the richer person \n");
    print_person(rich);


}