/* 
    Create a C program to count the number of occurrences of a specific character in a given  string using a function with two 
    arguments - the string and the character to be counted. The  function should take these two values as arguments and return the count of occurrences.
*/

#include <stdio.h>

// Function to count the occurrences of a specific character in a string
int countOccurrences(char *str, char ch) {
    int count = 0;
    
    // Iterate through each character in the string
    while (*str != '\0') {
        // If the current character matches the specified character, increment the count
        if (*str == ch) {
            count++;
        }
        
        // Move to the next character in the string
        str++;
    }
    
    return count;
}

int main() {
    char str[100];
    char ch;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter a character to count: ");
    scanf("%c", &ch);
    
    // Call the countOccurrences function and store the result
    int occurrences = countOccurrences(str, ch);
    
    printf("Number of occurrences of '%c' in the string: %d\n", ch, occurrences);
    
    return 0;
}
