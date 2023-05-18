#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[3],b[3],c[6],i,j,f;
    printf("Enter element of set A:");
    for(i=0;i<3;i++)
    {
        scanf("%d",a[i]);
    }
     printf("Enter element of set B:");
    for(i=0;i<3;i++)
    {
        scanf("%d",b[i]);
    }
    for(i=0;i<3;i++)
    {
        c[i]=a[i];
    }
    for (i=0;i<3;i++)
    {
        c[i+3]=b[i];
    }
    for(i=0;i<6;i++)
    {
        f=0;
        for(j=i+1;j<=6;j++)
        {
            if(c[i]==c[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("%d\t",c[i]);
        }
    }
}
