#include<stdio.h>
// WAP in C that takes input as integers and returns back the prime number as output
void main()
{
    int i,j,counter=0;
    int num[5];
    printf("enter the   natural numbers except 1:    ");
   for(i=0;i<5;i++) // INPUT
   {
    scanf("%d",&num[i]);
   }


   for(i=0;i<5;i++)
   {
    
     for(j=2;j<=num[i]-1;j++)
     {
       
        
        if(num[i]%j==0)
        {
            counter=counter+1;
        }
     }
     if(counter==0)
     {
        printf("%d is the prime number\n",num[i]);
     }
     counter=0;
     
   }

}