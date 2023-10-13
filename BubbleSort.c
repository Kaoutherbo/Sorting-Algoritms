#include"main.h"


void bubbleSort(int* arr, int n) {
    // Iterate through each element in the array
    for (int i = 0; i < n - 1; i++) {
        // Assume no swaps are needed
        bool swapped = false;

        // Iterate through the unsorted part of the array
        for (int j = 0; j < n - i - 1; j++) {
            // If the current element is greater than the next one
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                // A swap was made
                swapped = true;
            }
        }

        // If no swaps were made in the inner loop, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}