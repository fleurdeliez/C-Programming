// 5.18.24

#include <stdio.h>

int main() {
    int arr1[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int arr2[10];
    
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 10; j++) {
            int sumPairs = arr1[i] + arr1[i + 1];
            arr2[i] = sumPairs; 
        }
    }

    printf("SUM of TWO suceeding pairs: ");
    
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}