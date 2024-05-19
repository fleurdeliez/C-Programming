// 5.19.24

#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        if (arr[i] %2 == 0) {
            sum += arr[i];
        }
    }

    printf("Sum of the even numbers: %d", sum);

    return 0;
}