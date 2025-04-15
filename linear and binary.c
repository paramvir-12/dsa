#include <stdio.h>

void Insertion(int arr[], int *n) {
    int value;
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    if (*n >= 10) {
        printf("Array is full! Cannot insert more elements.\n");
        return;
    }

    arr[*n] = value;
    (*n)++;

    printf("After Insertion:\n");
    for (int i = 0; i < *n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void Deletion(int arr[], int *n) {
    int index;
    printf("Enter the index to delete (0 to %d): ", *n - 1);
    scanf("%d", &index);

    if (index < 0 || index >= *n) {
        printf("Invalid index!\n");
        return;
    }

    for (int i = index; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;

    printf("After Deletion:\n");
    for (int i = 0; i < *n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void LinearSearch(int arr[], int n) {
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            return;
        }
    }

    printf("Element not found.\n");
}

void BinarySearch(int arr[], int n) {
    int key;
    printf("Enter the element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            return;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    printf("Element not found.\n");
}

int main() {
    int arr[10], n = 5, i, choice;

    printf("Enter 5 elements:\n");
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    do {
        printf("\n--- MENU ---\n");
        printf("1. Insertion\n");
        printf("2. Deletion\n");
        printf("3. Linear Search\n");
        printf("4. Binary Search\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: Insertion(arr, &n); break;
            case 2: Deletion(arr, &n); break;
            case 3: LinearSearch(arr, n); break;
            case 4: BinarySearch(arr, n); break;
            case 5: printf("Exiting program.\n"); break;
            default: printf("Invalid choice!\n");
        }

    } while (choice != 5);

    return 0;
}
