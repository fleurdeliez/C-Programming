#include <stdio.h>
#include <stdlib.h>

// Structure for a node 
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning of the linked list
void insert(struct Node** head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

// Function to find the middle element of the linked list
int findMiddleElement(struct Node* head) {
    struct Node* slowPtr = head;
    struct Node* fastPtr = head;

    while (fastPtr != NULL && fastPtr->next != NULL) {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }

    return slowPtr->data;
}

// Function to display the linked list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    // Insert elements into the linked list
    insert(&head, 5);
    insert(&head, 4);
    insert(&head, 3);
    insert(&head, 2);
    insert(&head, 1);

    printf("Linked List: ");
    display(head);

    int middleElement = findMiddleElement(head);
    printf("Middle Element: %d\n", middleElement);

    return 0;
}