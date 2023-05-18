#include<stdio.h>
void UNION(int setA[],int setB[],int x,int y)
{
   int setC[6];     // making setC where final answer will be
   int i,j,w,k;
   for(i=0;i<3;i++)  // copying set A to set C
   {
    setC[i]=setA[i];
   }
   w=i;
   for(i=0;i<=3;i++)             // setB
   {
    k=0;
         for(j=0;j<3;j++)       // SET A
         {
            if(setB[i]==setA[j])          //CHECKING USING SORTING CONCEPT
            { 
               k=1;
               break;
            }
            if(k==0)
            {
                setC[w]=setB[i];
                w=w+1;
            }
         }
   }
   printf("the union is ");
   for(i=0;i<w;i++)
   {
    printf("%d ",setC[i]);
   }

}
void main()
{
    int setA[3]={1,2,3};
    int setB[3]={3,4,5};
    UNION(setA,setB,sizeof(setA)/sizeof(setA[0]),sizeof(setB)/sizeof(setB[0]));

}