#include<stdio.h>
void UNION(int setA[],int setB[])
{
   int setC[6];     // making setC where final answer will be
   int i,j,f;
   for(i=0;i<3;i++) // copying set A
   {
    setC[i]=setA[i];
   }

   for(j=i;j<3;j++)  // copying setB
   {
    setC[j]=setB[j];
   }

   for(i=0;i<6;i++)
   {
     f=0;
    for(j=0;j<6;j++)
    {
        if(setC[i]==setC[j])
        {
            f==1;
            break;
        }
        if(f==0)
        {
           printf("%d ",setC[i]);
        }
    }
   }
   
}
void main()
{
    int setA[3]={1,2,3};
    int setB[3]={3,4,5};
    UNION(setA,setB);

}