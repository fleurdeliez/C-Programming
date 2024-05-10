/*
You have an array of integers data of size 10. Write a program that asks the user to enter 
ten  integers and stores them in the array. Then, using pointers, calculate and display the 
average  value of the elements in the array.
*/

#include <stdio.h>

int main() {
    int data[10];
    int *ptr = data;
    int sum = 0;
    float average;

    // ask the user to enter ten integers and store them in the array
    printf("Enter ten integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", ptr);
        ptr++;
    }

    // calculate the sum of the elements in the array using pointers
    ptr = data;
    for (int i = 0; i < 10; i++) {
        sum += *ptr;
        ptr++;
    }

    // calculate the average value of the elements in the array
    average = (float)sum / 10;

    // display the average value
    printf("Average value: %.2f\n", average);

    return 0;
}