// 5.18.24

#include <stdio.h>

int main() {
    
    double celcius, fahrenheight;
    char choice;

    do {
        printf("Enter the temperature in Celsius: ");
        scanf("%lf", &celcius);

        fahrenheight = celcius * (9 / 5) + 32;
        printf("Temperature in Fahrenheight: %.2lf", fahrenheight);

        printf("\nConvert again? Y/N: ");
        scanf(" %c", &choice);       
               
    } while (choice == 'Y' );

    return 0;
}