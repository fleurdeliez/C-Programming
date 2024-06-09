#include <stdio.h>

int main() {
    int n;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d elements in the array\n");
    for (int i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    int *ptr = arr;

    printf("The elements you entered are:\n");
    for (int i = 0; i < n; i++) {
        printf("element - %d: %d\n", i, *ptr);
        ptr++;
    }

    return 0;
}