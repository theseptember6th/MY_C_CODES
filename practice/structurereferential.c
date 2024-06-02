#include<stdio.h>
struct Node{
    int data;
    struct Node *next;
};
void main()
{
    struct Node n1={100,NULL};
    struct Node n2={200,NULL};
    struct Node n3={300,NULL};
    struct Node n4={400,NULL};
    struct Node n5={500,NULL};

    n1.next=&n2;
    n2.next=&n3;
    n3.next=&n4;
    n4.next=&n5;

    struct Node*root=&n1;
    

    // now use root to print the data of n4
   
   // printf("%d\n",root->next->next->next->data);
     struct Node*p=root;
   // if its so lengthy and too much mental work  so
//    while(p->next!= NULL)
//    {
//      printf("%d ",p->data);
//      p=p->next;
//    }  

// to print 500 also
   while(p!= NULL)
   {
     printf("%d ",p->data);
     p=p->next;
   }  

}