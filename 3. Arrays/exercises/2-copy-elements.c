/* 
Write a program in C to copy the elements of one array into another array.
Test Data :
Input the number of elements to be stored in the array : 3
Input 3 elements in the array :
element - 0 : 15
element - 1 : 10
element - 2 : 12
Expected Output :
The elements stored in the first array are :
15 10 12
The elements copied into the second array are :
15 10 12
*/

#include <stdio.h>

int main() {
    
    int n; // input: size of the array

    printf("Test Data :\n");

    // get the size of the array
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n); 

    int arr[n]; // declare the array after getting the array size
    int copy[n]; // array to copy the elements into

    // loop to get the elements
    printf("Input %d elements in the array :\n", n);
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]); 
    }
    // to copy the elements
    for (int i = 0; i < n; i++) {
        copy[i] = arr[i];
    }
    // print the elements in the first array
    printf("The elements stored in the first array :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);        
    }
    // print the second array
    printf("\nThe elements copied into the second array are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", copy[i]);
        
    }

    return 0;
}