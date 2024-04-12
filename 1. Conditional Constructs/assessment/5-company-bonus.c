// SWITCH STATEMENT

/* A company gives bonus to its employees depending on the number of years of service.
Number of Years      Bonus
0 – 5                20% of salary
6 – 10               25% of salary
11 – 15              30% of salary
16 – 20              35% of salary
> 20                 50% of salary
Make a program to input the number of years and its salary. Display the corresponding bonus.*/

#include <stdio.h>

int main() {
    int years; // years of service in the company
    double salary; // salary of the employee
    double bonus; // output

    printf("Input the number of years of service: ");
    scanf("%d", &years);
    printf("Input salary: ");
    scanf("%lf", &salary);

    switch (years) {
        case 0 ... 5:
            bonus = 0.20;
            break;
        case 6 ... 10:
            bonus = 0.25;
            break;
        case 11 ... 15:
            bonus = 0.30;
            break;
        case 16 ... 20:
            bonus = 0.35;
            break;
        default:
            bonus = 0.50;
    }

    // calculate and display the company bonus
    bonus = bonus * salary;
    printf("\nBonus = %.2lf Pesos", bonus);

    return 0;
}