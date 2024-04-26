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

// Function to update the account balance based on transaction type
void updateAccountBalance(float *balance, float transactionAmount, char transactionType) {
    if (transactionType == 'D') {
        // Deposit transaction
        *balance += transactionAmount;
    } else if (transactionType == 'W') {
        // Withdrawal transaction
        if (transactionAmount > *balance) {
            printf("Insufficient balance for withdrawal.\n");
        } else {
            *balance -= transactionAmount;
        }
    } else {
        // Invalid transaction type
        printf("Invalid transaction type.\n");
    }
}

int main() {
    float balance;
    float transactionAmount;
    char transactionType;

    // Prompt the user to enter the initial balance
    printf("Enter the initial balance: ");
    scanf("%f", &balance);

    // Loop to simulate multiple transactions
    while (1) {
        // Prompt the user to enter the transaction amount and type
        printf("Enter the transaction amount: ");
        scanf("%f", &transactionAmount);
        printf("Enter the transaction type (D for deposit, W for withdrawal): ");
        scanf(" %c", &transactionType);

        // Update the account balance
        updateAccountBalance(&balance, transactionAmount, transactionType);

        // Display the updated balance
        printf("Updated balance: %.2f\n", balance);
    }

    return 0;
}