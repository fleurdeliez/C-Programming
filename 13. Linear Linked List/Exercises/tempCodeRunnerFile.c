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
char* findHighestScore(struct Student* head) {
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
    // Create a sample linked list of student records
    struct Student* head = NULL;
    struct Student* current = NULL;
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    for (int i = 0; i < numStudents; i++) {
        struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));

        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", newStudent->name);

        printf("Enter the score of student %d: ", i + 1);
        scanf("%d", &newStudent->score);

        newStudent->next = NULL;

        if (head == NULL) {
            head = newStudent;
            current = newStudent;
        } else {
            current->next = newStudent;
            current = newStudent;
        }
    }

    // Find the student with the highest score
    char* highestScoreStudent = findHighestScore(head);

    // Print the name of the student with the highest score
    if (highestScoreStudent != NULL) {
        printf("Student with the highest score: %s\n", highestScoreStudent);
    } else {
        printf("No student records found.\n");
    }

    return 0;
}