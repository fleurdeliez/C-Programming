#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 20
#define NUM_SUBJECTS 5

typedef struct {
    int id;
    char name[50];
    int age;
    char grade[10];
    int marks[NUM_SUBJECTS];
} Student;

void addStudent(Student students[], int *count) {
    if (*count < MAX_STUDENTS) {
        printf("\nEnter student ID: ");
        scanf("%d", &students[*count].id);
        printf("Enter student name: ");
        scanf(" %[^\n]", students[*count].name);
        printf("Enter student age: ");
        scanf("%d", &students[*count].age);
        printf("Enter student grade: ");
        scanf(" %[^\n]", students[*count].grade);
        printf("\nEnter marks for 5 subjects:\n");
        for (int i = 0; i < NUM_SUBJECTS; i++) {
            printf("Subject %d: ", i + 1);
            scanf("%d", &students[*count].marks[i]);
        }
        (*count)++;
        printf("\nStudent added successfully!\n");
    } else {
        printf("\nStudent limit reached.\n");
    }
}

void searchStudent(Student students[], int count) {
    int id, found = 0;
    printf("\nEnter student ID to search: ");
    scanf("%d", &id);
    for (int i = 0; i < count; i++) {
        if (students[i].id == id) {
            printf("\nStudent Details:\n");
            printf("ID: %d\nName: %s\nAge: %d\nGrade: %s\nMarks: ", students[i].id, students[i].name, students[i].age, students[i].grade);
            for (int j = 0; j < NUM_SUBJECTS; j++) {
                printf("%d ", students[i].marks[j]);
            }
            printf("\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student not found.\n");
    }
}

void displayAllStudents(Student students[], int count) {
    if (count == 0) {
        printf("No students to display.\n");
    } else {
        printf("\nStudent Details:\n");
        for (int i = 0; i < count; i++) {
            printf("\nID: %d\nName: %s\nAge: %d\nGrade: %s\nMarks: ", students[i].id, students[i].name, students[i].age, students[i].grade);
            for (int j = 0; j < NUM_SUBJECTS; j++) {
                printf("%d ", students[i].marks[j]);
            }
            printf("\n");
        }
    }
}

int main() {
    Student students[MAX_STUDENTS];
    int count = 0;
    int choice;

    while (1) {
        printf("\nMenu:\n\n");
        printf("1. Add a student\n");
        printf("2. Search for a student\n");
        printf("3. Display all students\n");
        printf("4. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudent(students, &count);
                break;
            case 2:
                searchStudent(students, count);
                break;
            case 3:
                displayAllStudents(students, count);
                break;
            case 4:
                printf("Exiting the program...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
