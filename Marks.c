#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);


    char names[n][50];
    float marks[n];


    printf("\nStep 1: Enter Names \n");
    for(i = 0; i < n; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf("%s", names[i]);
    }


    printf("\n Step 2: Enter Marks \n");
    for(i = 0; i < n; i++) {
        printf("Enter the marks for %s: ", names[i]);
        scanf("%f", &marks[i]);
    }


    printf("\n Student Records \n");
    printf("ID\tName\t\tMarks\n");
    printf("------------------------------\n");
    for(i = 0; i < n; i++) {
        printf("%d\t%s\t\t%.2f\n", i + 1, names[i], marks[i]);
    }

    return 0;
}
