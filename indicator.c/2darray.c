#include <stdio.h>


void cubeArray(int *ptr, int size) {
    for (int i = 0; i < size * size; i++) {
        int value = *(ptr + i);
        printf("%d\t", value * value * value);

        // Move to next line after each row
        if ((i + 1) % size == 0)
            printf("\n");
    }
}

int main() {
    int n;

    printf("Enter array's size: ");
    scanf("%d", &n);

    int a[n][n];

    printf("\nEnter array elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nCubes of 2D array elements:\n");
    cubeArray(&a[0][0], n);   // Passing base address using pointer

    return 0;
}
