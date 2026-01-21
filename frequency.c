#include <stdio.h>

int main() {
    int arr[100], n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nElement  Frequency\n");

    for(i = 0; i < n; i++) {
        count = 1;

        /* Check if element is already counted */
        for(j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                count = 0;
                break;
            }
        }

        /* Count frequency */
        if(count != 0) {
            for(j  = i + 1; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }
            printf("%d\t   %d\n", arr[i], count);
        }
    }

    return 0;
}
