// 5.20.24

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[50];
    printf("Enter the first string: ");
    gets(str1);

    printf("Enter the second string: ");
    gets(str2);

    strcat(str1, str2);

    printf("Concatenated String: ", puts(str1));
    
    return 0;
}