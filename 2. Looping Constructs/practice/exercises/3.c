// 5.18.24

#include <stdio.h>

int main() {

    int i = 100;
    
    do {
        printf("%d ", i);
        i--;
    } while (i >= 0);

    return 0;
}