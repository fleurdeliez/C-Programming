// 5.17.24

#include <stdio.h>

int main() {
    int day;
    
    printf("Input day in numeric form: ");
    scanf("%d", &day);
    
    if (day >= 1 && day <= 5) {
        printf("WEEKDAY");
    } else {
        printf("WEEKEND");
    }
    return 0;
}