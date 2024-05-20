// 5.20.24

#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    printf("Enter a string: ");
    gets(str);

    int lenght = strlen(str);

    for (int i = lenght - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}