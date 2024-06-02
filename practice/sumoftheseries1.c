#include<stdio.h>
#include<math.h>
// 1+11+111+1111+.........
 
int main()
{
    int n;
    int sum;
    if(n<=0)
    {
        return -1;
    }
   printf("enter the number of terms");
   scanf("%d",&n);
   sum=((int)pow(10,n+1)-9*n-10)/81;
   printf("the sum of the %d term is %d ",n,sum);
   return 0;
}
