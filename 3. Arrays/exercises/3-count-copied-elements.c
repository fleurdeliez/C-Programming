/*• Write a program in C to count a total number of duplicate elements in an array. Test Data : 
Input the number of elements to be stored in the array : 3 
Input 3 elements in the array : 
element - 0 : 5 
element - 1 : 1 
element - 2 : 1 
Expected Output : 
Total number of duplicate elements found in the array is : 1 */

#include <stdio.h>

int main() {

    int n; // input: array size
    int count = 0; // counter

    // get the array size
    printf("Test Data :\n");
    printf("Input the number of elements to be stored in the array : ");
    scanf("%d", &n); 

    int arr[n];

    // loop get the elements to be stored in the array
    printf("Input %d elements in the array:\n");
    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]); 
    }

    // loop to count the duplicate elements
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            if (arr[i] == arr[j]) {
                count++;
                break;
            }
        }
    }

    printf("Total number of duplicate elements in the array is %d", count);    
    
    return 0;
}