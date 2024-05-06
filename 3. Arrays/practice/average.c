// program to find the average of n numbers using arrays

#include <stdio.h>

int main() {

    int n;
    float sum = 0, average; 

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    average = sum / n;

    printf("Average: %.2f", average);
    return 0;
}