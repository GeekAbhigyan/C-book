#include <stdio.h>

// Swap two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition using pointers
int* partition(int *low, int *high) {
    int pivot = *(high);
    int *i = low - 1;
    for (int *j = low; j < high; ++j) {
        if (*j < pivot) {
            ++i;
            swap(i, j);
        }
    }
    swap(i + 1, high);
    return i + 1; // Return pointer to the pivot's sorted position
}

// Quicksort using pointer ranges
void quicksort(int *low, int *high) {
    if (low < high) {
        int *pi = partition(low, high);
        quicksort(low, pi - 1);    // Left subarray
        quicksort(pi + 1, high);   // Right subarray
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quicksort(arr, arr + n - 1);
    for (int i = 0; i < n; ++i)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
