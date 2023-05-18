#include<stdio.h>
/* THE GCD OF TWO NUMBERS m and n IS SAME AS  THE GCD BETN the numbers n and m%n.
 Also the GCD of the number m and 0 is always m itself.
 define the function interms of itself
 
HCF(m,n)=HCF(n,m%n)       very very very important
 BASE condition HCF(m,0)=m
*/
int HCF(int,int);
void main()
{
    int m,n;
    printf("enter the two numbers");
    scanf("%d%d",&m,&n);
    printf("the hcf between %d and %d is %d",m,n,HCF(m,n));
}
int HCF(int m,int n)
{
    if(n==0)
    {
        return m;
    }
    else{
        return HCF(n,m%n);
    }


}