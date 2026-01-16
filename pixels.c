
#include <stdio.h>

int main() {
    int photo[3][3];
    int boost;

    printf(" Image Processor \n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter pixel value for row %d, col %d (0-255): ", i, j);
            scanf("%d", &photo[i][j]);
        }
    }

    printf("\nEnter brightness boost value: ");
    scanf("%d", &boost);

    printf("\nUpdated Image Pixels:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            photo[i][j] += boost;
            if (photo[i][j] > 255) photo[i][j] = 255;
            printf("%d\t", photo[i][j]);
        }
        printf("\n");
    }
    return 0;
}
