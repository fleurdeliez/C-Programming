#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to count the number of nodes in the linked list
int countNodes(struct Node* head) {
    int count = 0;
    struct Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

int main() {
    int n, data;
    printf("Input the number of nodes: ");
    scanf("%d", &n);

    struct Node* head = NULL;
    struct Node* temp = NULL;

    // Create the linked list
    for (int i = 0; i < n; i++) {
        printf("Input data for node %d: ", i + 1);
        scanf("%d", &data);
        struct Node* newNode = createNode(data);
        if (head == NULL) {
            head = newNode;
            temp = newNode;
        } else {
            temp->next = newNode;
            temp = temp->next;
        }
    }

    // Print the data in the linked list
    printf("Data entered in the list are:\n");
    struct Node* current = head;
    while (current != NULL) {
        printf("Data = %d\n", current->data);
        current = current->next;
    }

    // Count the number of nodes
    int nodeCount = countNodes(head);
    printf("Total number of nodes = %d\n", nodeCount);

    return 0;
}