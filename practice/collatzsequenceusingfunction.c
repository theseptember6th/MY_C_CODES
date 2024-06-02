#include<stdio.h>
   // https://www.youtube.com/watch?v=-uMa2mBvyeA&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=43     0:47 qn.3
 void print_collatz_starting_from(int);
 int is_odd(int);  
void main()
{
    int num;
   printf("enter the number to start the collatz sequence");
   scanf("%d",&num);
   
   print_collatz_starting_from(num);
}

void print_collatz_starting_from(int x)
{   int z=x;
printf("the collatz sequence starting from %d is \n",x);
   while(z!=1)
   {
    if(is_odd(z))  // if function is successful
    { 
        z=z/2;
        printf("%d ",z);
        
    }
    else{
        z=3*z+1;
        printf("%d ",z);
    }
   }
}

int is_odd(int y)
{
    if(y%2!=0)
    {
        return 0; //  function unsucessful it is giving odd
    }
    else{
        return 1;  // function sucessfull it is giving even
    }
    
}