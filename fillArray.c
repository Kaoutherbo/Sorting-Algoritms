#include"main.h"

void fillArray(int *arr, int size)
{
    // Array traversal 
    for (int i = 0; i < size; i++)
    {
        printf("Enter a value : ");
        scanf("%d",&arr[i]);
    }
}