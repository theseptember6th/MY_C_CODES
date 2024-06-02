#include<stdio.h>
#include<math.h>
// 1*10+3*20+6*30+10*40+15*50+...........
int main()
{
   int sum=0;
   int term,n,i;
   printf("enter the no of terms");
   scanf("%d",&n);
   if(n<=0)
   {
    return -1;
   }
   for(i=1;i<=n;i++)
   {
    term=(int)pow(i,3)*5+(int)5*pow(i,2);
    sum=sum+term;
   }
   printf("the sum of the term is %d",sum);
   return 0;
}