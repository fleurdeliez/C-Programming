/* 
Write a program that would store 11 numbers in a one-dimensional array. Store the sum of the two
succeeding pairs in another array. Hence, only 10 integers will be stored in the second array.

Sample run:
Enter eleven numbers: 1 2 3 4 5 6 7 8 9 10 11
SUM of TWO succeeding pairs: 3 5 7 9 11 13 15 17 19 21
*/
#include <stdio.h>

int main() {
    int array[11], sumPair[10];

    printf("Enter eleven numbers: ");

    for (int i = 0; i < 11; i++) {
        scanf("%d", &array[i]);
    }

    for (int i = 0; i < 10; i++) {
        sumPair[i] = array[i] + array[i+1];
    }

    for (int i = 0; i < 10; i++) {
        printf("%d ", sumPair[i]);
    }
    return 0;
}