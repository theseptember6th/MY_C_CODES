#include<stdio.h>
int largest(int num[],int);
void main()
{
  int n;
  int i;
  printf("enter n numbers\n");
  scanf("%d",&n);
  int num[n];
  printf("enter the  %d numbers \n",n);
  for(i=1;i<=n;i++)
  {
    scanf("%d",&num[i]);
  }

  int greatest=largest(num,n);
  printf("the greatest element is %d",greatest);
  

}





int largest(int num[],int x)
{
    int i;
  int greatest=0;
  for(i=1;i<=x;i++)
  {
    if(greatest<num[i])
    {
        greatest=num[i];
    }
  }
  return greatest;

}