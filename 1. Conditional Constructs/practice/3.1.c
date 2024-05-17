// 5.17.24

#include <stdio.h>

int main() {
    int day;

    printf("Input day in numeric form: ");
    scanf("%d", &day);
    
    if (day == 1) {
        printf("That day is a Monday.\n");
    }
    if (day == 2) {
        printf("That day is a Tuesday.\n");
    }
    if (day == 3) {
        printf("That day is a Wednesday.\n");
    }
    if (day == 4) {
        printf("That day is a Thursday.\n");
    }
    if (day == 5) {
        printf("That day is a Friday.\n");
    }
    if (day == 6) {
        printf("That day is a Saturday.\n");
    }
    if (day == 7) {
        printf("That day is a Sunday.\n");
    } else {
        printf("INVALID OUTPUT");
    }

    printf("Have a nice day!");
    
    return 0;
}