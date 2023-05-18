#include<stdio.h>
int fibonacci_number(int);
void main()
{
    int n;
  printf("enter the nth term for the fibonacci sequence");
  scanf("%d",&n);
  int fibonnaci=fibonacci_number(n);
  printf("the  %d th term of the fibonacci sequence is %d",n,fibonnaci);
}
int fibonacci_number(int n)
{     
  if(n==1)
  {
    return 0;
  }
  else if(n==2)
  {
    return 1;
  }
  else{

  
    
      return fibonacci_number(n-1)+fibonacci_number(n-2);
     }
}