// 5.19.24

#include <stdio.h>

int main() {
    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array:\n", n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);        
    }

    int odd_arr[n], even_arr[n], oddCount = 0, evenCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] %2 == 0) {
            even_arr[evenCount++] = arr[i];
        } else {
            odd_arr[oddCount++] = arr[i];
        }
    }

    printf("\nThe Even elements are:\n");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even_arr[i]);
    }

    printf("\nThe Odd elements are:\n");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd_arr[i]);
    }

    return 0;
}