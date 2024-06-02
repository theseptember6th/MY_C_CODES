#include<stdio.h>
void main()
{ 
    // zero values are false and non zero values are true
    /* 
    int result = (5==5);    
    printf("%d",result);    
  here the condition 5==5 is true so when printed ,the result gives non zero value .
  */ 

  // USING NOT OPERATOR
  /*
int result = !(5==5);    
    printf("%d",result); 
  even though its true..it is giving false result
  */

 //TERNARY OPERATOR
 /*
 int marks=50;
 // condition ? truecase : falsecase;  
    marks>32 ? printf("you passed"): printf("you failed");
      here marks is greater than 32  so it is true 
      so it will print you passed.
 */

//ANOTHER EXAMPLE
int marks =50;
int prize= marks>32? 1000:0;
printf("Your prize is %d",prize);




}

