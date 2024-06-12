#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node;

typedef struct node(
    char value[50];
    struct Node *next;
) *current, *head, *tail;

int main() {
    current = NULL;
    head = NULL;
    tail = NULL;

    current = malloc(sizeof(struct Node));
    strcpy(current->value, "Jayson");
    current->next = NULL;
    head = current;
    tail = current;

    current = malloc(sizeof(struct Node));
    strcpy(current->value, "James");
    current->next = NULL;
    tail->next = current;
    tail = current;

    current = malloc(sizeof(struct Node));
    strcpy(current->value, "Mayor");
    current->next = NULL;
    tail->next = current;
    tail = current;

    return 0;
}