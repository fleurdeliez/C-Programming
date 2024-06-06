#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    int age;
    float gpa;
    struct Student* next;
};

struct Student* head = NULL;

void addStudent() {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
    
    printf("Enter Roll Number: ");
    scanf("%d", &newStudent->rollNumber);
    
    while (getchar() != '\n');
    
    printf("Enter Name: ");
    fgets(newStudent->name, sizeof(newStudent->name), stdin);

    size_t len = strlen(newStudent->name);
    if (len > 0 && newStudent->name[len - 1] == '\n') {
        newStudent->name[len - 1] = '\0';
    }
    
    printf("Enter Age: ");
    scanf("%d", &newStudent->age);
    
    printf("Enter GPA: ");
    scanf("%f", &newStudent->gpa);
    
    newStudent->next = NULL;
    
    if (head == NULL) {
        head = newStudent;
    } else {
        struct Student* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newStudent;
    }
    
    printf("\nStudent added successfully!\n");
}

void displayStudents() {
    printf("Enrolled Students:\n");
    if (head == NULL) {
        printf("\nNo students enrolled.\n");
    } else {
        struct Student* temp = head;
        while (temp != NULL) {
            printf("Roll Number: %d | Name: %s | Age: %d | GPA: %.2f\n", temp->rollNumber, temp->name, temp->age, temp->gpa);
            temp = temp->next;
        }
    }
}

void searchStudent() {
    int rollNumber;
    printf("Enter Roll Number to search: ");
    scanf("%d", &rollNumber);
    
    struct Student* temp = head;
    while (temp != NULL) {
        if (temp->rollNumber == rollNumber) {
            printf("\nStudent Found: \nRoll Number: %d | Name: %s | Age: %d | GPA: %.2f\n", temp->rollNumber, temp->name, temp->age, temp->gpa);
            return;
        }
        temp = temp->next;
    }
    
    printf("\nStudent not found.\n");
}

int main() {
    int choice;
    printf("\nStudent Enrollment System\n\n");
    
    do {
        printf("1. Add a new student\n");
        printf("2. Display enrolled students\n");
        printf("3. Search for a student by roll number\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            case 4:
                printf("\nThank you for using the Student Enrollment System!\n");
                break;
            default:
                printf("\nInvalid choice. Please try again.\n");
                break;
        }
        
        printf("\n");
    } while (choice != 4);
    
    return 0;
}
