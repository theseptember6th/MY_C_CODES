#include<stdio.h>
void main()
{
    // int number1=60,number2=55;
    // float number3=number1/number2;
    // printf("the division result is %f",number3);
    // this will give the integer result and not float result ..the answer will come 1.0000 and not 1.333
    // so for this we have to asssign float on division result


    //first method changing explicitly
   /* int number1=60 ,number2=55;
    float number3=number1/(float)number2;
    printf("the division result is %f",number3);
   */

  //changing by another method
  /*int number1=60 ,number2=55;
    float number3=number1/number2.0f;
    printf("the division result is %f",number3);
   */
  

  //changing one variable to another
  /*float number3=number1+number2;
  int x=(int)number3;
  */



}