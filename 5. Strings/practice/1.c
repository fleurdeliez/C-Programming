// 5.20.24

#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter a string: ");    
    fgets(str, sizeof(str), stdin);

    printf("Size of string: %zu", strlen(str));
    
    return 0;
}