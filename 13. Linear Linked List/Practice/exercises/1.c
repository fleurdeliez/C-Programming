#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct record{
    char name[50];
    int score;
    struct record *next;
} *head, *second, *third;

char* findStudentHighestScore(struct record*);

int main() {
    head = NULL;
    second = NULL; 
    third = NULL;

    head = malloc(sizeof(struct record));
    second = malloc(sizeof(struct record));
    third = malloc(sizeof(struct record));

    strcpy(head->name, "John");
    head->score = 85;
    head->next = second;

    strcpy(second->name, "Alice");
    second->score = 92;
    second->next = third;

    strcpy(third->name, "Bob");
    third->score = 78;
    third->next = NULL;

    char* highestScoreStudent = findStudentHighestScore(head);
    
    printf("Student with the highest score: %s\n", highestScoreStudent);
    free(head);
    free(second);
    free(third);

    return 0;
}

char* findStudentHighestScore(struct record* head){
    if (head == NULL) {
        return NULL;
    } 

    struct record* current = head;
    struct record* highestScoreStudent = head;

    while (current != NULL) {
        if (current->score > highestScoreStudent) {
            highestScoreStudent = current;
        }
        current = current->next;
    }
    return highestScoreStudent->name;
}