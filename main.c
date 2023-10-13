#include"main.h"

int main()
{
    int size = getSize("Enter the size of the array : ");

    int *arr = (int *)malloc(size * sizeof(int)); // Memory allocation for the array 

    if(arr == NULL)
    {
        printf("Memory can't be alocated !");
        return -1;
    }

    fillArray(arr,size);

    int option = getOption("Type 1 for Sorting by selection.\nType 2 for Sorting by insertion.\nType 3 for Bubble sorting.");
    
    printUsageSort(arr,size,option);

    free(arr); // Freeing allocated memory 

    return 0;
}
