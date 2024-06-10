#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;
    int *ptr = arr;

    printf("Input 10 integers in the array:\n");
    for (int i = 0; i < 10; i++) {
        printf("element - %d: ", i+1);
        scanf("%d", &arr[i]);        
    }

    for (int i = 0; i < 10; i++) {
        sum += *ptr;
        ptr++;
    }

    float result = (float)sum / 10;

    printf("\nAverage: %.2f", result);

    return 0;
}