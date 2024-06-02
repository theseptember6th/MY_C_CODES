#include<stdio.h>
int main()
{
    int number;
    printf("enter the number");
    scanf("%d",&number);


    if(number<=0)
    {
        printf("%d number is neither odd nor even",number);
        return -1;
    }


    if(number%2==0)
    {
      if((number>=2 && number<=5)  || (number>20))
      {
        printf("weird");
      }
      if((number>=6 && number<=20))
      {
        printf("not weird");
      }
    }


    else
    {
    printf("Weird");
    }
    return 0;
}