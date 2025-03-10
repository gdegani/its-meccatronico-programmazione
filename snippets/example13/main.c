#include <stdio.h>
#include <stdlib.h>

// A utility function to swap two elements
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

/* Function to print an array */
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
/* Function to print an array */
void printArraySlice(int arr[], int begin, int size) {
    for (int i = begin; i < begin + size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/* This function takes the last element as pivot, places
   the pivot element at its correct position in the sorted
   array, and places all smaller elements to the left of the pivot
   and all greater elements to the right of the pivot */
int partition(int arr[], int low, int high) {
    printArraySlice(arr, low, high - low + 1);
    int pivot = arr[high]; // pivot element
    int i = (low - 1); // index of the smaller element

    for (int j = low; j <= high - 1; j++) {
        // If the current element is smaller than the pivot
        if (arr[j] < pivot) {
            i++; // increment index of the smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
   arr[] --> Array to be sorted,
   low --> Starting index,
   high --> Ending index */
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi is the partitioning index, arr[pi] is now at the right place
        int pi = partition(arr, low, high);

        // Recursively sort elements before and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}


// Driver code
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5, 4, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, n);
    quickSort(arr, 0, n - 1);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}