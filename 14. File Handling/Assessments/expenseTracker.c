#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 20

struct record {
    char date[20];
    char description[50];
    int amount;
};

FILE *fpointer;

void addExpense();
void viewExpenses();
void deleteExpenses();

int main() {
    fpointer = fopen("expenses.txt", "a");
    if (fpointer == NULL) {
        perror("Error opening file");
        return 1;
    }
    fprintf(fpointer, "\nDate\t\tDescription\tAmount\n");
    fprintf(fpointer, "------------------------------------------------------------\n");
    fclose(fpointer);

    int choice;
    do {
        printf("\n1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Delete Expense\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addExpense();
                break;
            case 2:
                viewExpenses();
                break;
            case 3:
                deleteExpenses();
                break;
            case 4:
                printf("\nExiting...");
                break;
            default:
                printf("\nInvalid Choice. Please try again.");
        }
        
    } while (choice != 4);

    return 0;
}

int count = 0;

void addExpense() {
    struct record expenses;

    if (count < MAX_ENTRIES) {
        printf("\nEnter date (YYYY-MM-DD): ");
        scanf("%s", expenses.date);
        printf("Enter description: ");
        scanf("%s", expenses.description);
        printf("Enter amount: ");
        scanf("%d", &expenses.amount);

        fpointer = fopen("expenses.txt", "a");
        if (fpointer == NULL) {
            perror("Error opening file");
            return;
        }
        fprintf(fpointer, "%s\t%s\t\t%d\n", expenses.date, expenses.description, expenses.amount);
        fclose(fpointer);
        count++;
    } else {
        printf("Maximum entries reached.\n");
    }
}

void viewExpenses() {
    char ch;
    fpointer = fopen("expenses.txt", "r");
    if (fpointer == NULL) {
        perror("Error opening file");
        return;
    }
    while ((ch = fgetc(fpointer)) != EOF) {
        putchar(ch);
    }
    fclose(fpointer);
}

void deleteExpenses() {
    FILE *tempFile;
    char date[20], line[100];
    int found = 0;

    printf("Enter date (YYYY-MM-DD) of expense to delete: ");
    scanf("%s", date);

    fpointer = fopen("expenses.txt", "r");
    if (fpointer == NULL) {
        perror("Error opening file");
        return;
    }
    tempFile = fopen("temp.txt", "w");
    if (tempFile == NULL) {
        perror("Error opening temporary file");
        fclose(fpointer);
        return;
    }

    while (fgets(line, sizeof(line), fpointer) != NULL) {
        if (strstr(line, date) == NULL || found || strstr(line, date) - line != 0) {
            fputs(line, tempFile);
        } else {
            found = 1;
        }
    }

    fclose(fpointer);
    fclose(tempFile);

    remove("expenses.txt");
    rename("temp.txt", "expenses.txt");

    if (found) {
        printf("Expense on date %s deleted successfully.\n", date);
    } else {
        printf("No expense found on date %s.\n", date);
    }
}
