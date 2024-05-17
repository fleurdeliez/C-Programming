// 5.17.24

#include <stdio.h>

int main() {
    int num = 1, sum = 0;

    do {
        sum += num;
        num += 3;
    } while (num = 100);

    printf("Sum: %d", sum);

    return 0;
}
