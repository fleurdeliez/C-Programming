/*
 In a banking application, you are responsible for implementing a function to update the balance of a
 customer's account after each transaction. The function updateAccountBalance takes three
 arguments (current balance, transaction amount, transaction type).
 The function updates the account balance based on the transaction type:
 • For a deposit ('D'), the transaction amount is added to the current balance.
 • For a withdrawal ('W'), the transaction amount is subtracted from the current balance.
 Write a C program that implements the updateAccountBalance function and simulates a series of
 transactions for a bank account. The program should prompt the user to enter the initial balance and
 then ask for details of each transaction (transaction amount and type). After each transaction, the
 updated balance should be displayed to the user.
 Ensure proper validation of user input and handle cases where the transaction amount exceeds the
 available balance for withdrawals.
*/

#include <stdio.h>

// Function to update the account balance
void updateAccountBalance(float *balance, float transactionAmount, char transactionType) {
    if (transactionType == 'D') {
        *balance += transactionAmount; // Add transaction amount to the current balance
    } else if (transactionType == 'W') {
        if (transactionAmount > *balance) {
            printf("Insufficient balance for withdrawal.\n");
        } else {
            *balance -= transactionAmount; // Subtract transaction amount from the current balance
        }
    } else {
        printf("Invalid transaction type.\n");
    }
}

int main() {
    float balance;
    printf("Enter the initial balance: ");
    scanf("%f", &balance);

    while (1) {
        float transactionAmount;
        char transactionType;

        printf("Enter the transaction amount: ");
        scanf("%f", &transactionAmount);
        printf("Enter the transaction type (D for deposit, W for withdrawal): ");
        scanf(" %c", &transactionType);

        updateAccountBalance(&balance, transactionAmount, transactionType);

        printf("Updated balance: %.2f\n", balance);
    }

    return 0;
}