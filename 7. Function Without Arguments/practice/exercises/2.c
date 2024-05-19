// 5.19.24


#include <stdio.h>

void printEvenNumbers() {
    int start = 1, evenCount = 0;

    printf("First 10 even numbers: ");
    while (evenCount < 10) {
        if (start % 2 == 0) {
            printf("%d ", start);
            evenCount++;
        }
        start++;
    }
}

int main() {
    printEvenNumbers();
    return 0;
}