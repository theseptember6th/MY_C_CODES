#include<stdio.h>
#include<math.h>
// another way for 1+11+111+1111+........
void main()
{
    int n,i,term=1;
    int sum=0;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      sum=sum+term;
      term=term*10+1;
    }
   printf("%d",sum);
}
