#include <stdio.h>

void printUnion(int arr[], int size);

void main(){
    int arr_1[]={1,2,3,4};
    int arr_2[]={3,4,5,6};

    int size1 = sizeof(arr_1)/sizeof(int);
    int size2 = sizeof(arr_2)/sizeof(int);
    int size = size1+size2;

    int result[size];

    for (int i = 0;  i< size1;i ++){
        result[i]=arr_1[i];
    }

    for (int i = 0;  i< size2; i ++){
        result[i+size1]=arr_2[i];
    }

    printUnion(result, size);


}

void printUnion(int arr[], int size){
       for (int i = 0; i < size; i++)
    {
        int j;
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                break;
            }
        }
        if (j == size)
            printf("%d ", arr[i]);
    }
}