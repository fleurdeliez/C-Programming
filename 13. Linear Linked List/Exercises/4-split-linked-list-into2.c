#include <stdio.h>
#include <stdlib.h>

// Node structuree
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning of the linked list
void insert(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Function to split the linked list into two separate listss
void splitLinkedList(struct Node* head, struct Node** oddList, struct Node** evenList) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data % 2 == 0) {
            insert(evenList, current->data);
        } else {
            insert(oddList, current->data);
        }
        current = current->next;
    }
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Main function
int main() {
    struct Node* head = NULL;
    struct Node* oddList = NULL;
    struct Node* evenList = NULL;

    // Insert elements into the linked list
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 5);

    // Split the linked list into two separate lists
    splitLinkedList(head, &oddList, &evenList);

    // Print the odd list
    printf("Odd List: ");
    printList(oddList);

    // Print the even list
    printf("Even List: ");
    printList(evenList);

    return 0;
}