// 5.18.24

#include <stdio.h>

int main() {
    
    int start, end, step; // input

    printf("Input start: ");
    scanf("%d", &start);

    printf("Input end: ");
    scanf("%d", &end);
    
    printf("Input step: ");
    scanf("%d", &step);

    while (start <= end) {
        printf("%d\n", start);
        start += step;
    };
    
    return 0;
}