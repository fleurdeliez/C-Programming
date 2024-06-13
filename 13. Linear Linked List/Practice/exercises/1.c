#include <stdio.h>

struct record{
    char name;
    int score;
    struct record *next;
} *head, *second, *third;

char* findStudentHighestScore(struct* record);

int main() {
    head = NULL;
    second = NULL; 
    third = NULL;

    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    strcpy(head->name, "John");
    head->score = 85;
    head->next = second;

    strcpy(second->name, "Alice");
    second->score = 92;
    second->next = third;

    strcpy(third->name, "Bob");
    third->score = 78;
    third->next = NULL;

    char* findStudentHighestScore(head);

    return 0;
}

char* findStudentHighestScore(struct record* head){
    
}