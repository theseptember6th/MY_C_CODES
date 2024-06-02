#include<stdio.h>
void print_prime_less_than(int);
int is_prime(int);
void main()
{
    int num,i;
    printf("enter the number\n");
    scanf("%d",&num);
    print_prime_less_than(num);
    

}
 // yesle value pathaune to is_prime function

    void print_prime_less_than(int n)   // num is stored in n
    {
        int i;
        for(i=2;i<n;i++)  //numbers should start from 2
        {
            if(is_prime(i)) // if returned 1 
            {
                printf("%d is a prime number\n",i);
            }
            else{  // if returned -1
                printf("%d is not a prime number\n",i);
            }
        }
        
    }

// YESLE CHECK GARNE
int is_prime(int x)
{
   int i;
   for(i=2;i<=x-1;i++)
   {
    if(x%i==0)
    {
       return 0;
    }
    
   }
   return 1;
   
} 
   

