//https://www.youtube.com/watch?v=ggBunpBs0VY&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=68
//qn no 21


#include<stdio.h>
typedef struct{
    char district[20];
    char local_level_name[20];
    int ward_number;
}address;

typedef struct{
    int roll_number;
    char name[100];
     address z;
     int marks[5];
} Student;

 Student  create_student()
 {
      Student x;
    int i;
    printf("enter the roll number of the student\n");
    scanf("%d",&x.roll_number);
    getchar();   //enter buffrer from the roll number input will save here and wont interfere with gets(name)
    printf("enter the name of the student\n\n");
    // scanf("%s",&x.name);
    gets(x.name);
    printf("enter the adress of the student\n");
    printf("district is \t");
    gets(x.z.district);
    //scanf("%s",&x.z.district);
    printf("\n");
    printf("local level name is\t");
    // scanf("%s",&x.z.local_level_name);
    gets(x.z.local_level_name);
    printf("\n");
    printf("ward number is\t");
    scanf("%d",&x.z.ward_number);
    printf("\n\n\n");
    printf("enter the marks of the student\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&x.marks[i]);
    }
   
    return x;
     
 }

 int get_total_marks(Student n)
 {
    int sum=0;
    int i;
    for(i=0;i<5;i++)
    {
        sum=sum+n.marks[i];
    }
    return sum;
    
 }

 float get_percentage(Student y)
 {
    
    float percentage;
    percentage=get_total_marks(y)/5.0f;
    return percentage;
    
 }
 float average_percentage(Student z[],int n)
 {
     int i;
     float avg_percentage=0;
     for(i=0;i<n;i++)
     {
        avg_percentage=avg_percentage+get_percentage(z[i]);
     }
     avg_percentage=avg_percentage/5;
     return avg_percentage;
 }
 

 void main()
 {
    Student A[5]; 
   
    int i;
    for(i=0;i<5;i++)
    {
        A[i]=create_student();
    }
    int sum=get_total_marks(A[0]);
    printf("the total marks is %d\n",sum);
    float percentage=get_percentage(A[0]);
    printf("the percentage is %.3f",percentage);
    float avg_percentage=average_percentage(A,5);
    printf("the average percentage is %.3f",avg_percentage);

 }


