/*
Write a program that will ask the user to input three integers. Call these three 
integers as start, end and step, respectively. Assume that start is always less than end 
and that step is a positive integer greater than zero. Thereafter, the program should 
print the numbers such that the first item is start, the second item is equivalent to 
the first item plus the value of step, the third item is equivalent to second item plus 
the value of step and so on. The last value to be printed should not be greater than end. 
For example, if start = 5, end = 10 and step = 2, then the output should be:
5
7
9
*/

#include <stdio.h>

int main() {
    int start, end, step;
    
    printf("Enter the start value: ");
    scanf("%d", &start);
    
    printf("Enter the end value: ");
    scanf("%d", &end);
    
    printf("Enter the step value: ");
    scanf("%d", &step);
    
    int current = start;
    
    while (current <= end) {
        printf("%d\n", current);
        current += step;
    }
    
    return 0;
}

