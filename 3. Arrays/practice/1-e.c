#include <stdio.h>

int main() {

    int arr[11], sumPairs[10];

    printf("Enter 11 numbers: ");
    for (int i = 0; i < 11; i++) {
        scanf("%d", &arr[i]);
        for (int i = 0; i < 10; i++) {
            sumPairs[i] = arr[i] + arr[i+1];
        } 
    }

    printf("SUM of TWO pairs: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", sumPairs[i]);
    }

    return 0;
}