// 5.19.24

#include <stdio.h>
#define ROWS 3
#define COLS 4

int main() {
    int arr[ROWS][COLS];

    printf("Input elements in the matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);            
        }
    }

    printf("The matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);        
        }
        printf("\n");
    }
    return 0;
}