#include<stdio.h>
char is_prime(int);
void main()
{  
    int num;
   printf("enter the number except 1 and 2\n");
   scanf("%d",&num);
   char Result=is_prime(num);
   if(Result=='P')
   {
      printf("%d is prime number\n ",num);
   }
   else{
    printf("%d is not a prime number\n",num);
   }

}
char is_prime(int x)
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
    return 'P';
   }
   else{
    return 'N';
   }
}