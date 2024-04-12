/* Write a program to print the even numbers in the Fibonacci series up to the 10th term  without passing any arguments to the function.*/

#include <stdio.h>

void printEvenFibonacci()
{
    int first = 0, second = 1, next;
    
    printf("Even numbers in the Fibonacci series up to the 10th term:\n");
    
    for (int i = 1; i <= 10; i++)
    {
        next = first + second;
        first = second;
        second = next;
        
        if (next % 2 == 0)
        {
            printf("%d ", next);
        }
    }
    
    printf("\n");
}

int main()
{
    printEvenFibonacci();
    
    return 0;
}