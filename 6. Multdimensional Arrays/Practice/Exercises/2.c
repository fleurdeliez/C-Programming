// 5.19.24

#include <stdio.h>

int main() {
    int n;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    float arr[n];
    printf("Input %d elements in the array: \n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ");
        scanf("%f", &arr[i]);        
    }

    return 0;
}