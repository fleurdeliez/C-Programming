/*
You have an array of integers data of size 10. Write a program that asks the user 
to enter ten  integers and stores them in the array. Then, using pointers, 
calculate and display the average  value of the elements in the array.
*/

#include <stdio.h>

int main() {
    int data[10];
    int sum = 0;
    int *ptr = data;

    printf("Input 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("element - %d: ", i+1);
        scanf("%d", ptr);
        ptr++;
    }

    ptr = data;
    for (int i = 0; i < 10; i++) {
        sum += *ptr;   
        ptr++;     
    }

    float ave = (float)sum / 10;

    printf("Average: %.2f", ave);
    return 0;
}