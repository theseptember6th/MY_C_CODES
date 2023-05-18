#include<stdio.h>
#include<math.h>
void main()
{
    float celsius;
    float fahrenheit;
    float x;
    printf("enter the temperature in celsius");
    scanf("%f",&celsius);
    fahrenheit=1.8*celsius+32;
    //x=round(fahrenheit);
   // printf("required fahrenheit result is %.2f",x);
     printf("required fahrenheit result is %.2f",fahrenheit);
}