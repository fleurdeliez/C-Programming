#include <stdio.h>
#include <string.h>
#define MAX 5

typedef struct{
    int id;
    char name[50];
    double salary;
} record;

void addEmployee();
void displayEmployees();
void calculateAveSalary();

int main() {
    record employee[MAX];
    int choice, count = 0;

    printf("Employee Management System:\n");

    while (1) {
        printf("\nMenu:\n\n");
        printf("1. Add an employee\n");
        printf("2. Display employee details\n");
        printf("3. Calculate average salary\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                addEmployee(employee, &count);
                break;
            case 2:
                displayEmployees(employee, count);
                break;
            case 3:
                calculateAveSalary(employee, count);
                break;
            case 4:
                printf("\nExiting the program...");
                return 0;
            default:
                printf("\nInvalid choice. Try again.\n");
        }
    };

    return 0;
}

void addEmployee(record employee[], int* count){
    if (*count < MAX) {
        printf("\nEnter employee id: ");
        scanf("%d", &employee[*count].id);
        printf("Enter employee name: ");
        getchar();
        fgets(employee[*count].name, sizeof(employee[*count]), stdin);
        printf("Enter employee salary: ");
        scanf("%lf", &employee[*count].salary);
        (*count)++;
    } else {
        printf("\nEmployee limit reached.");
    }
}

void displayEmployees(record employee[], int count){
    if (count != 0) {
        printf("\nEmployee Details:\n");
        for (int i = 0; i < count; i++) {
            printf("\nID: %d\n", employee[i].id);
            printf("Name: %s", employee[i].name);
            printf("Salary: %.2lf\n", employee[i].salary);
        }
    } else {
        printf("\nNo employees to display.\n");
    }
}

void calculateAveSalary(record employee[], int count){
    if (count != 0) {
        double totalSalary = 0;
        for (int i = 0; i < count; i++) {
            totalSalary += employee[i].salary;
        }
        printf("\nAverage Salary: %.2lf\n", totalSalary / count);
    } else {
        printf("\nNo employees to calculate average salary.\n");
    }
}
