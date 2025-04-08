#include <stdio.h>

// Function to perform insertion sort
void insertion_sort(int arr[], int n) {
    int i, key, j;
    
    // Loop through the array starting from the second element
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
        
        // Move elements of arr[0..i-1] that are greater than key
        // to one position ahead of their current position
        while (j >= 0 && key < arr[j]) {
            arr[j + 1] = arr[j];
            j--;
        }
        
        // Place the key element at its correct position
        arr[j + 1] = key;
    }
}

// Function to print the array
void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Example usage:
int main() {
    int arr[] = {64, 34, 25, 12, 22,