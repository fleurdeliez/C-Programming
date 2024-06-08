#include <stdio.h>

int main() {
    int first, *firstp = &first;
    int second, *secondp = &second;
    int third, *thirdp = &third;

    printf("Input the first number: ");
    scanf("%d", &first);
    printf("Input the second number: ");
    scanf("%d", &second);
    printf("Input the third number: ");
    scanf("%d", &third);

    int sum = *firstp + *secondp + *thirdp;
    
    printf("The sum of the entered numbers is: %d", sum);
    
    
    return 0;
}