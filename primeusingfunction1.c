#include<stdio.h>
int is_prime(int);
void main()
{  
    int num;
   printf("enter the number");
   scanf("%d",&num);
   int Result=is_prime(num);
   if(Result== 0)
   {
      printf("%d is prime number\n ",num);
   }
   else{
    printf("%d is not a prime number\n",num);
   }

}
int is_prime(int x)
{
    int i,counter=0;
   for(i=2;i<=x-1;i++)
   {
    if(x%i==0)
    {
      counter=counter+1;
    }
   }
   if(counter==0)
   {
    return 0;
   }
   else{
    return 1;
   }
}