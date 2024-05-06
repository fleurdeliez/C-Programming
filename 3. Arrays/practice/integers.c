#include <stdio.h>

int main() {

    int arr[5];
    
    printf("Enter 5 integers: ");
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]); 
    }
    
    printf("Integers stored in the array:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}