#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to represent a student record
struct Student {
    char name[50];
    int score;
    struct Student* next;
};

// Function to find the student with the highest score
char* findStudentWithHighestScore(struct Student* head) {
    if (head == NULL) {
        return NULL;
    }

    struct Student* current = head;
    struct Student* highestScoreStudent = head;

    while (current != NULL) {
        if (current->score > highestScoreStudent->score) {
            highestScoreStudent = current;
        }
        current = current->next;
    }

    return highestScoreStudent->name;
}

int main() {
    // Create a linked list of student records
    struct Student* head = NULL;
    struct Student* second = NULL;
    struct Student* third = NULL;

    head = (struct Student*)malloc(sizeof(struct Student));
    second = (struct Student*)malloc(sizeof(struct Student));
    third = (struct Student*)malloc(sizeof(struct Student));

    strcpy(head->name, "John");
    head->score = 85;
    head->next = second;

    strcpy(second->name, "Alice");
    second->score = 92;
    second->next = third;

    strcpy(third->name, "Bob");
    third->score = 78;
    third->next = NULL;

    // Find the student with the highest score
    char* highestScoreStudent = findStudentWithHighestScore(head);

    // Print the name of the student with the highest score
    printf("Student with the highest score: %s\n", highestScoreStudent);

    // Free the memory allocated for the linked list
    free(head);
    free(second);
    free(third);

    return 0;
}