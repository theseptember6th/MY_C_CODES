#include<stdio.h>
// sorting in ascending order     result must be 1 2 4 7 9
void main()
{
int i,j,temp;
int a[5]={7,9,2,4,1};
for(i=0;i<5;i++)
{
    for(j=i+1;j<5;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];  // temp vanne variable ma value of a[i] haleko
            a[i]=a[j];  // a[i] ko position ma a[j] ko value haleko
            a[j]=temp;  // a[j] ko position ma temp ko value haleko
        }
    }
    
}
printf("printing the series in ascending order");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }

}
