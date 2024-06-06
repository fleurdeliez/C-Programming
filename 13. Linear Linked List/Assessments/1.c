#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student{
    int rollNumber;
    char name;
    int age;
    float gpa;
    struct Student* next;
};

struct Student* head = NULL;

void addNewStudent() {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
    char a;
    printf("\nEnter roll number: ");
    scanf("%d", &newStudent->next);
    getchar();
    printf("Enter Name: ");
    gets(newStudent->next);
    scanf("%c", &a);
    printf("Enter age: ");
    scanf("%d", &newStudent->next);   
    printf("Enter GPA: ");
    scanf("%f", &newStudent->next);  

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
    
    printf("\nStudent not found.\n");
}

int main() {
    int choice;
     do {
        printf("\n1. Add a new student:\n");
        printf("2. Display enrolled students:\n");
        printf("3. Search for a student by roll number:\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addNewStudent();
                break;
            case 2:
                displayStudents();
                break;
            case 3:
                searchStudent();
                break;
            default:
                printf("Invalid Choice. Try again.");
        }

     } while (choice != 4);

    return 0;
}