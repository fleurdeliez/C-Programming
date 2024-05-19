// 5.19.24

#include <stdio.h>

int main() {
    int n;
    printf("Input the size of the square matrix (less than 5): ");
    scanf("%d", &n);

    int arr1[n][n];
    printf("Input elements in the first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);            
        }
    }

    int arr2[n][n];
    printf("Input elements in the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);            
        }
    }

    printf("The first matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    
    printf("The second matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    int sum_arr[n][n];
    printf("The Addition of the two matrix is:");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            sum_arr[i][j] = arr1[i][j] + arr2[i][j]; 
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", sum_arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}