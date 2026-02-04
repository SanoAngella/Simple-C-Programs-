#include <stdio.h>

void printArray(int arr[], int index, int size) {
    if (index == size)
        return;
    printf("%d ", arr[index]);
    printArray(arr, index + 1, size);
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    printArray(arr, 0, 5);
    return 0;
}
