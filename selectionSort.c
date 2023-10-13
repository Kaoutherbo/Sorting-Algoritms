#include"main.h"

void selectionSort(int* arr, int n) {
    // Iterate through each element in the array
    for (int i = 0; i < n - 1; i++) {
        // Assume the first unsorted element is the minimum
        int minIndex = i;

        // Iterate through the unsorted elements to find the minimum
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Swap the found minimum element with the first unsorted element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}