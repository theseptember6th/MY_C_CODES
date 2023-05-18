#include<stdio.h>
int main()
{
    int sum=0;
    int i,x,y,z,rem;
    printf("enter the startng range:\n");
    scanf("%d",&x);
    printf("enter the ending range:\n");
    scanf("%d",&y);
    printf("the armstrong numbers between the range are:\n");
    
    for(i=x;i<=y;i++)
    {
        z=i;
    
      do{  
       rem=z%10;
       sum=sum+rem*rem*rem;
       z=z/10;
       }while(z!=0);

         if(sum==i)
       {
        printf("%d ",i);
       }
       sum=0;
    }
    
    return 0;
}