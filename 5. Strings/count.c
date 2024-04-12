#include <ctype.h>
#include <stdio.h>

int main() {

    char line[100];
    int vowel, consonant, digit, space, specialChar;

    vowel = consonant = digit = space = specialChar = 0;

    printf("Enter a line: ");
    fgets(line, sizeof(line), stdin);

    for (int i = 0; line[i] != '\0'; ++i) 
    {
        line[i] = tolower(line[i]);

        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' || line[i] == 'o' || line[i] == 'u') {
            ++vowel;
        } 
        else if (line[i] >= 'a' && line[i] <= 'z') {
            ++consonant;
        }
        else if(line[i] >= '0' && line[i] <= '9') {
            ++digit;
        }
        else if (line[i] == ' ') {
            ++space;
        }
        else if (!isalpha(line[i]) && !isdigit(line[i]) && !isspace(line[i])) {
            ++specialChar;
        }
    }

    printf("Vowels = %d.\n", vowel);
    printf("Consonants = %d.\n", consonant);
    printf("Digits = %d.\n", digit);
    printf("Spaces = %d.\n", space);
    printf("Special Characters = %d.\n", specialChar);
    
    return 0;
}