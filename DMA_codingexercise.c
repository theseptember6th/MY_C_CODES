//https://www.youtube.com/watch?v=wzyuXMBPqxc&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=82
// qn .1 

#include<stdio.h>

#include<stdlib.h>
double sum(double *y,int n)
{
	double sum=0;
	int i;
	for(i=0;i<n;i++)
	{
	   sum=sum+(*(y+i));
	}
	return(sum);
}


int main(){
  double *x;
 int n;
 printf(" enter the number of size of arr\n ");
 scanf("%d",&n);
 x=(double*)malloc(n*sizeof(double));
 if(x==NULL)
 {
 	printf("the allocation was failed\n");
 	exit(1);
 }
 int i;
 printf("enter the numbers\n");
 for(i=0;i<n;i++)
{
	scanf("%lf",&x[i]);
} 
double sum1=sum(x,n);
// printf("sum=%lf\",sum1);
printf("sum=%lf\n",sum1);
if(x!=NULL)
{
	free(x);
}
return 0;
}