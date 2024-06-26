#include <stdio.h>
#include <stdbool.h>

#define MAX_DATE 20
#define MAX_DESC 100

FILE *fp, *tmp;

void addExpense();
void viewExpenses();
void deleteExpense();

int main(){
    fp = fopen("expenses.txt", "w");
    if(fp == NULL){
        printf("Error opening file.");
        return 1;
    }

    fprintf(fp, "Date\t\tDescription\t\tAmount\n");
    fprintf(fp, "---------------------------------------------------");
    fclose(fp);

    int choice;
    do{
        puts("\nExpense Tracker:");
        puts("1. Add Expense");
        puts("2. View Expenses");
        puts("3. Delete Expense");
        puts("4. Exit");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                addExpense();
                break;
            case 2:
                viewExpenses();
                break;
            case 3:
                deleteExpense();
                break;
            case 4:
                puts("\nExiting...");
                break;
        }
    } while (choice != 4);

    return 0;
}

void addExpense(){
    fp = fopen("expenses.txt", "a");

    char date[MAX_DATE], description[MAX_DESC];
    int amount;

    printf("Enter date(YYYY-MM-DD): ");
    scanf("%s", date);
    printf("Enter description: ");
    getchar();
    fgets(description, MAX_DESC, stdin);
    getchar();
    printf("Enter amount: ");
    scanf("%d", &amount);

    fprintf(fp, "\n%s\t\t%s\t\t%d", date, description, amount);
    fclose(fp);
}
void viewExpenses(){
    fp = fopen("expenses.txt", "r");
    while(!feof(fp)){
        char ch = fgetc(fp);
        putchar(ch);
    }
    fclose(fp);
}
void deleteExpense(){

}
