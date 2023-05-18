#include<stdio.h>

void UNION(int setA[],int setB[],int x,int y)
{
    
    int setC[x+y];
    int i,j,z;
    for(i=0;i<x;i++)  // Copying Set A to Set C
    {
        setC[i]=setA[i];
    }
    int w=i;
   for(i=0;i<y;i++)   // set B
   {
      z=0;
       for(j=0;j<x &&z==0;j++)  // Set A
      {
          if(setB[i]==setA[j])
          {
            z=1;
          }
          if(z==0)
          {
            setC[w++]=setB[i];
          }
      }
   }

   printf("The Union is  ");
   for(i=0;i<x;i++)   // before set
   {
    printf("%d ",setC[i]);
   }
   for(i=0;i<w;i++)    // after set
   {
    printf("%d ",setC[i]);
   }

}

void main()
{ 
    int x,y,i;
    int setA[x];
    int setB[y];
    printf("Enter the size of set A and set B\n");
    scanf("%d%d",&x,&y);
    printf("enter the elements of set A\n");
    for(i=0;i<x;i++)
    {
        scanf("%d",&setA[i]);
    }
    printf("enter the elements of set B\n");
     for(i=0;i<y;i++)
    {
        scanf("%d",&setB[i]);
    }

    UNION(setA,setB,sizeof(setA)/sizeof(setA[0]),sizeof(setB)/sizeof(setB[0]));


}