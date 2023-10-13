#include"main.h"

void insertionSort(int* arr, int n) {
    // Iterate through each element in the array
    for (int i = 1; i < n; i++) {
        int key = arr[i]; // Store the current element as the key
        int j = i - 1; // Initialize j to the index of the previous element

        // Move elements greater than the key to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Shift the element to the right
            j = j - 1; // Decrement j
        }

        // Insert the key at the correct position
        arr[j + 1] = key;
    }
}