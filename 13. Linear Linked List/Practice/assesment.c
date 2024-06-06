#include <stdio.h>
#include <stdlib.h>

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
    
    printf("Enter Name: ");
    scanf("%s", newStudent->name);
    
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
    
    printf("Student added successfully!\n");
}

void displayStudents() {
    if (head == NULL) {
        printf("No students enrolled.\n");
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
            printf("Student Found: Roll Number: %d | Name: %s | Age: %d | GPA: %.2f\n", temp->rollNumber, temp->name, temp->age, temp->gpa);
            return;
        }
        temp = temp->next;
    }
    
    printf("Student not found\n");
}

int main() {
    int choice;
    
    do {
        printf("Student Enrollment System\n");
        printf("1. Add a new student\n");
        printf("2. Display enrolled students\n");
        printf("3. Search for a student by roll number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
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
                printf("Thank you for using the Student Enrollment System!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
        
        printf("\n");
    } while (choice != 4);
    
    return 0;
}