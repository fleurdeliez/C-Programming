#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char a;

    struct record{
        char name[20]; 
        int score;
        struct record *next;
    }student[3];

    for (int i = 0; i < 3; i++) {
        printf("\nEnter student %d name: ", i+1);
        gets(student[i].name);
        printf("Enter student %d score: ", i+1);
        scanf("%d", &student[i].score);
        scanf("%c", &a);
    }
    printf("\nThe student list:\n");
    for (int i = 0; i < 3; i++) {
        puts(student[i].name);
    }
    
    return 0;
}