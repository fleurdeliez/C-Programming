// 5.18.24

#include <stdio.h>

int main() {
    int i = 1;

    for (int i = 1; i <= 100; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}