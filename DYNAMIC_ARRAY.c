//https://www.youtube.com/watch?v=tidXT6akrlE&list=PLk98IQqBPuzL7BjQiRucdO3mdd6iJ51zM&index=82
// very good and logical question
#include<stdio.h>
#include<stdlib.h>
int *array=NULL;
int size=0;

int main()
{
    int index,element;
    init();
    int choice=0;
    do{
            printf("PRESS '1'  TO DISPLAY AN ARRAY\n");
            printf("PRESS '2' TO ADD AN ELEMENT TO THE ARRAY\n");
            printf("PRESS '3' TO REMOVE THE ELEMENT FROM THE ARRAY\n");
            printf("PRESS '4' TO EXIT \n");

            scanf("%d",&choice);

        switch(choice)
    {
            case 1:
                  display();
                  break;

             case 2:
                  printf("enter the position to add\n");
                  scanf("%d",&index);
                  printf("enter the element to  be add\n");
                  scanf("%d",&element);
                  insert(index,element);
                  break;

            case 3:
                 printf("enter the position to remove\n");
                 scanf("%d",&index);
                 _remove(index);   
                 break;

             case 4:
                 clean_up();
                 exit(0);
                 break;

            default:
                 printf("INVALID OPTION\n");
                 break;
            }






    }while(1);



    return 0;
}
// INITIALIZATION OF ARRAY
void init()
{
    int n;
    printf("enter the size of the array");
    scanf("%d",&n);
    size=n;
    array=(int *)malloc(n*sizeof(int));
    if(array==NULL)
    {
        printf("allocation failed\n");
        exit(1);
    }
   printf("enter the %d elements in the array\n",n);
   int i;
   for(i=0;i<n;i++)
   {
    scanf("%d",&array[i]);
   }


}

// displaying the array

void display()
{
    printf("the elements are:\n");
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");
}


// cleaning the array

void clean_up()
{
    if(array!=NULL)
    {
        free(array);
    }
}

//  INSERTING THE ELEMENT TO THE ARRAY

void insert(int index,int element)
{
    if(index >= size || index < 0)
    {
        printf("INVALID INDEX\n");
        return;
    }
    int *temp;
    size=size+1;
    temp=(int*)realloc(array,size*sizeof(int));
    if(temp==NULL)
    {
        printf("reallocation failed\n");
        clean_up();
        exit(1);
    }
    array=temp;
    int i;
    for(i=(size-1);i>=(index-1);i--)
    {
      array[i]=array[i-1];
    }
    array[index-1]=element;
}


// REMOVING THE ELEMENT FROM THE ARRAY
void _remove(int index)
{
     if(index >=size || index <0)
    {
        printf("INVALID INDEX\n");
        return;
    }
    int i;
    for(i=(index-1);i<(size-1);i++)
    {
        array[i]=array[i+1];
    }
    size=size-1;
    int *temp=(int*)realloc(array,size*sizeof(int));
    if(temp==NULL)
    {
        printf("Reallocation failed\n");
        clean_up();
        exit(2);
    }
    array=temp;

}