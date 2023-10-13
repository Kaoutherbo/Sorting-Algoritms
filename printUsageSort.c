#include"main.h"


void printUsageSort(int *arr, int size, int option)
{
    
    // Check if the option is 1
    if (option == 1) {
        selectionSort(arr,size);
        displayArray(arr,size,"\n The array after sorting by selectin");
    }
    // Check if the option is 2
    else if (option == 2) {
        insertionSort(arr,size);
        displayArray(arr,size,"\n The array after sorting by insertion");
    }
    // Check if the option is 3
    else {
        bubbleSort(arr,size);
        displayArray(arr,size,"\n The array after sorting by bubble");
    }
    
}

