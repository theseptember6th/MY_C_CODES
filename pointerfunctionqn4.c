//https://www.youtube.com/watch?v=gC_sJqV_v78&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=60
// qn 19.2

#include<stdio.h>
void print_sum(float a)
{
    printf("the answer is %.3f",a);
}
void print_error( char string[])       //  char * string = char string[]
{
    puts(string);
}
void divide(float a, float b,void(*fun)(float),void(*funn)(char str[]))    
{
    if(a==0 || b==0)
    {   
        char string[]=" error";
        funn(string);
    }
    else{
        if(a>b)
        {
            float divide=a/b;
            fun(divide);
        }
        else{
            float divide=b/a;
            fun(divide);
            
        }
    }
}
void main()
{
  float a,b;
  printf("enter the two numbers");
  scanf("%f\n%f",&a,&b); 
  void (*hi)(float);
  hi=&print_sum;
  void (*hii)(char string[]);
  hii=&print_error;
  divide(a,b,hi,hii);    /*or u can without declaring function pointers
  
                             divide(a,b,print_sum,print_error);  
  */  

}