#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 20

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

void addEmployee(Employee employees[], int *count) {
    if (*count < MAX_EMPLOYEES) {
        printf("\nEnter employee ID: ");
        scanf("%d", &employees[*count].id);
        printf("Enter employee name: ");
        getchar(); 
        fgets(employees[*count].name, sizeof(employees[*count].name), stdin);
        printf("Enter employee salary: ");
        scanf("%f", &employees[*count].salary);
        (*count)++;
        printf("\nEmployee added successfully!\n");
    } else {
        printf("\nEmployee limit reached.\n");
    }
}

void displayEmployees(Employee employees[], int count) {
    if (count == 0) {
        printf("\nNo employees to display.\n");
    } else {
        printf("\nEmployee Details:");
        for (int i = 0; i < count; i++) {
            printf("\nID: %d\nName: %s\nSalary: %.2f\n\n", employees[i].id, employees[i].name, employees[i].salary);
        }
    }
}

void calculateAverageSalary(Employee employees[], int count) {
    if (count == 0) {
        printf("No employees to calculate average salary.\n");
    } else {
        float totalSalary = 0;
        for (int i = 0; i < count; i++) {
            totalSalary += employees[i].salary;
        }
        printf("\nAverage salary: %.2f\n", totalSalary / count);
    }
}

int main() {
    Employee employees[MAX_EMPLOYEES];
    int count = 0;
    int choice;

    printf("Employee Management System\n\n");

    while (1) {
        
        printf("Menu:\n\n");
        printf("1. Add an employee\n");
        printf("2. Display employee details\n");
        printf("3. Calculate average salary\n");
        printf("4. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addEmployee(employees, &count);
                break;
            case 2:
                displayEmployees(employees, count);
                break;
            case 3:
                calculateAverageSalary(employees, count);
                break;
            case 4:
                printf("Exiting the program...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}
