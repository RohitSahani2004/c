#include <stdio.h>

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    int temp;

    // Check left child
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // Check right child
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i)
    {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        // Heapify the affected subtree
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)
{
    int i, temp;

    // Build Max Heap
    for (i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements from heap
    for (i = n - 1; i > 0; i--)
    {
        // Move root (maximum) to end
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        // Heapify reduced heap
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    printf("Sorted array: ");

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}