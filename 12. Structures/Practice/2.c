#include <stdio.h>
#include <string.h>
#define MAX 10

typedef struct {
    int id;
    char name[50];
    int age;
    char grade[5];
    int mark[5];
} database;

void addStudent();
void searchStudent();
void displayStudents();

int main() {
    database student[MAX];
    int choice, count = 0;

    printf("\nStudent Database Management System:");

    while (1) {
        printf("\n\nMenu:\n");
        printf("1. Add a student\n");
        printf("2. Search for a student\n");
        printf("3. Display all students\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        

        switch (choice) {
            case 1:
                addStudent(student, &count);
                break;
            case 2:
                searchStudent(student, count);
                break;
            case 3:
                displayStudents(student, count);
                break;
            case 4:
                printf("\nExiting the program...\n");
                return 0;
            default:
                printf("\nInvalid Choice. Try again.\n");
        }
    };
    return 0;
}

void addStudent(database student[], int *count){
    if (*count < MAX) {
        printf("\nEnter student ID: ");
        scanf("%d", &student[*count].id);
        getchar();
        printf("Enter student name: ");
        fgets(student[*count].name, sizeof(student[*count]), stdin);
        printf("Enter student age: ");
        scanf("%d", &student[*count].age);
        printf("Enter student grade: ");
        scanf("%s", &student[*count].grade);
        printf("\nEnter marks for 5 subjects:\n");
        for (int i = 0; i < 5; i++) {
            printf("Subject %d: ", i+1);
            scanf("%d", &student[*count].mark[i]);
        }
        printf("\nStudent added successfully!");
        (*count)++;
    } else {
        printf("\nStudent limit reached.\n");
    }
}
void searchStudent(database student[], int count){
    int id, found = 0;
    printf("\nEnter student ID to search: ");
    scanf("%d", &id);
    if (count != 0) {
        for (int i = 0; i < count; i++) {
            if (student[i].id == id) {
                printf("\n\nStudent Details:\n");
                printf("ID: %d\nName: %sAge: %d\nGrade: %s\nMarks: ", student[i].id, student[i].name, student[i].age, student[i].grade);
                for (int j = 0; j < 5; j++) {
                    printf("%d ", student[i].mark[j]);
                } 
                found = 1;
                break;
            }
            if(!found){
                printf("\nstudent not found.\n");
            }
        }
    } else {
        printf("\nNo students added in the database to search.\n");
    }
}

void displayStudents(database student, int count){

}