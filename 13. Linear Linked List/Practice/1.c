#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// structure to represent the student record
struct Student {
    char name[50];
    int score;
    struct Student* next;
};

// function to find the student with the highest score
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
    // sample linked list of student records
    struct Student* head = NULL;
    struct Student* current = NULL;
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    char a;

    for (int i = 0; i < numStudents; i++) {
        struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
        scanf("%c", &a);
        printf("\nEnter the name of student %d: ", i + 1);
        gets(newStudent->name);
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

    // find the student with the highest  score
    char* highestScoreStudent = findHighestScore(head);

    // print the name of the student with the highest score
    if (highestScoreStudent != NULL) {
        printf("\nStudent with the highest score:\n");
        puts(highestScoreStudent);
    } else {
        printf("\nNo student records found.\n");
    }

    return 0;
}