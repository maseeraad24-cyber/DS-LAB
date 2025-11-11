#include <stdio.h>

int binarySearchDescending(int arr[], int low, int high, int key) {
    if(low > high)
        return -1; // not found

    int mid = (low + high) / 2;

    if(arr[mid] == key)
        return mid;

    // Since array is sorted in descending order
    if(key < arr[mid])
        return binarySearchDescending(arr, mid + 1, high, key);
    else
        return binarySearchDescending(arr, low, mid - 1, key);
}

int main() {
    int arr[] = {100, 80, 60, 50, 30, 20, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;

    printf("Enter value to search: ");
    scanf("%d", &key);

    int result = binarySearchDescending(arr, 0, n - 1, key);

    if(result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
