/* 
    Write a C program to calculate the average of elements in an array using a function with two  arguments - the array and its size. 
    The function should take the array and its size as arguments and  return the average of the elements.
*/

#include <stdio.h>

// Function to calculate the average of elements in an array
float calculateAverage(int arr[], int size) {
    int sum = 0;
    float average;

    // Calculate the sum of all elements in the array
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Calculate the average by dividing the sum by the size
    average = (float)sum / size;

    // Return the average
    return average;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call the calculateAverage function and print the result
    float avg = calculateAverage(arr, size);
    printf("Average: %.2f\n", avg);

    return 0;
}