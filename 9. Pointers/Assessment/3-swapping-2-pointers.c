/*
You are tasked with swapping the values of two pointer variables. 
Write a program that: 
1. Declares two integer pointer variables, ptrA and ptrB, and assigns them the addresses  of two different integer variables. 
2. Write a function called swapPointers that takes two integer pointers as parameters. 3. Inside the function, swap the values of the two pointers. 
4. In the main() function, print the values of ptrA and ptrB before calling the  swapPointers function. 
5. Call the swapPointers function, passing ptrA and ptrB as arguments. 6. Print the values of ptrA and ptrB after calling the function. They should be swapped. 
*/

/*
You are tasked with swapping the values of two pointer variables. 
Write a program that: 
1. Declares two integer pointer variables, ptrA and ptrB, and assigns them the addresses  of two different integer variables. 
2. Write a function called swapPointers that takes two integer pointers as parameters. 
3. Inside the function, swap the values of the two pointers. 
4. In the main() function, print the values of ptrA and ptrB before calling the swapPointers function. 
5. Call the swapPointers function, passing ptrA and ptrB as arguments. 
6. Print the values of ptrA and ptrB after calling the function. They should be swapped. 
*/

#include <stdio.h>

// function to swap the values of two integer pointers
void swapPointers(int* ptr1, int* ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;
    
    int* ptrA = &num1; // pointer to num1
    int* ptrB = &num2; // pointer to num2
    
    printf("Before swapping:\n");
    printf("ptrA = %p, *ptrA = %d\n", ptrA, *ptrA);
    printf("ptrB = %p, *ptrB = %d\n", ptrB, *ptrB);
    
    swapPointers(ptrA, ptrB); // call the swapPointers function
    
    printf("\nAfter swapping:\n");
    printf("ptrA = %p, *ptrA = %d\n", ptrA, *ptrA);
    printf("ptrB = %p, *ptrB = %d\n", ptrB, *ptrB);
    
    return 0;
}