#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node with given data
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a new node at the end of the linked list
void insertNode(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to remove duplicates from the linked list
void removeDuplicates(struct Node* head) {
    if (head == NULL) return;

    struct Node* current = head;
    struct Node* prev = NULL;
    int hashTable[1000] = {0}; // Assuming the elements are within the range 0-999

    while (current != NULL) {
        // If the element is seen for the first time, mark it in the hash table
        if (hashTable[current->data] == 0) {
            hashTable[current->data] = 1;
            prev = current;
        } else {
            // Duplicate element found, remove it
            prev->next = current->next;
            free(current);
        }
        current = prev->next;
    }
}

int main() {
    struct Node* head = NULL;

    // Insert some elements into the linked list
    insertNode(&head, 10);
    insertNode(&head, 20);
    insertNode(&head, 30);
    insertNode(&head, 20);
    insertNode(&head, 40);
    insertNode(&head, 10);

    printf("Original list:\n");
    printList(head);

    removeDuplicates(head);

    printf("List after removing duplicates:\n");
    printList(head);

    return 0;
}
