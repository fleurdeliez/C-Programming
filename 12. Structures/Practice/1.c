#include <stdio.h>
#include <string.h>
#define MAX 5

struct record {
    int id;
    char name[50];
    double salary;
}employee[MAX];

void addEmployee();
void displayDetails();
void calculateAveSalary();

int main() {
    printf("\nEmployee Management System:\n");
    int choice;
    do {
        printf("\nMenu:\n\n");
        printf("1. Add an employee\n");
        printf("2. Display employee details\n");
        printf("3. Calculate average salary\n");
        printf("4. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee();
                break;
            case 2:
                displayDetails();
                break;
            case 3:
                calculateAveSalary();
                break;
            case 4:
                printf("\nExiting the program...");
                break;
            default:
                printf("\nInvalid Choice. Try again.");
        }
        
    } while (choice != 4);

    return 0;
}

void addEmployee(){
    int i = 0;
    char a;
    if (i < MAX) {
    printf("\nEnter employee ID: ");
    scanf("%d", &employee[i].id);
    printf("Enter employee name: ");
    scanf("%c", &a);
    gets(employee[i].name);
    printf("Enter employee salary: ");
    scanf("%lf", &employee[i].salary);
    printf("\n\nEmployee added successfully!\n");  
    i++;
    } else {
        printf("\n\nEmployee limit reached.");
    }
}

void displayDetails(){
    for (int i = 0; i < MAX; i++) {
        printf("\nEmployee Details:\n");
        printf("\nID: %d", employee[i].id);
        printf("\nName: ");
        puts(employee[i].name);
        printf("\nSalary: %.2lf", employee[i].id);
    }
}

void calculateAveSalary(){

}