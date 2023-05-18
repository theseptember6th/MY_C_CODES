#include<stdio.h>
int is_prime(int);
void main()
{  
    int num;
   printf("enter the number");
   scanf("%d",&num);
//    int Result=is_prime(num);
//    if(Result== 0)
//    {
//       printf("%d is not a prime number\n ",num);
//    }
//    else{
//     printf("%d is  a prime number\n",num);
//    }
 

 // OR
 if(is_prime(num))   // if function is returning 1 i.e true
 {
    printf("%d is  the prime number",num);
 }
 else{    // if function is returning 0 i.e false
    printf("%d is  not the prime number",num);
 }

}
int is_prime(int x)
{
    int i,counter=0;
   for(i=2;i<=x-1;i++)
   {
    if(x%i==0)
    {
      return 0; // FALSE
    }
   }
   return 1; // TRUE
}