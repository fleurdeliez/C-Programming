/* You are developing a program that converts temperatures from Celsius to
Fahrenheit. Allow the user to convert multiple temperatures until they choose to exit.*/

#include <stdio.h>

int main() {
    char choice;
    float celsius, fahrenheit;

    do {
        printf("Enter the temperature in Celcius: ");
        scanf("%f", &celsius); 

        fahrenheit = (celsius * 9 / 5) + 32;
        
        printf("Temperature in Fahrenheit");
        printf("\nDo you want to convert another temperature? (y/n)");
        scanf("%c", &choice);      
    } while (choice == 'y' || choice == 'Y');

    return 0;
}