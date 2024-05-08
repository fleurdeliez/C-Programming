/*
4. Write a program in C to store n elements in an array and print the elements using pointer.
Test Data:
Input the number of elements to store in the array :5
Input 5 number of elements in the array:
element - 0: 5
element - 1: 7
element - 2: 2
element - 3: 9
element - 4: 8
Expected Output:
The elements you entered are:
element - 0: 5
element - 1: 7
element - 2: 2
element - 3: 9
element - 4: 8
*/

#include <stdio.h>

int main() {
    int n;
    printf("Input the number of elements to store in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input %d number of elements in the array:\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The elements you entered are:\n");
    for (int i = 0; i < n; i++) {
        printf("element - %d: %d\n", i, *(arr + i));
    }

    return 0;
}