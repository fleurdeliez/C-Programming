#include <stdio.h>

int main() {
    int n;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Input %d number of elements in the array\n");
    for (int i = 0; i < n; i++) {
        printf("element - %d: ", i+1);
        scanf("%d", &arr[i]);        
    }
    
    return 0;
}