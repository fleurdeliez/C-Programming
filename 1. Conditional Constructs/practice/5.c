// 5.17.24

#include <stdio.h>

int main() {
    int years;
    double salary, bonus;

    printf("Input the number of years of service: ");
    scanf("%d", &years);
    printf("Input salary: ");
    scanf("%lf", &salary);

    switch (years) {
        case 0 ... 5:
            bonus = salary * 20 / 100;
            break;
        case 6 ... 10:
            bonus = salary * 25 / 100;
            break;
        case 11 ... 15:
            bonus = salary * 30 / 100;
            break;
        case 16 ... 20:
            bonus = salary * 35 / 100;
            break;
        default:
            bonus = salary * 50 / 100;
            break;
    }

    printf("Bonus: %.2lf Pesos.", bonus);
    
    return 0;
}