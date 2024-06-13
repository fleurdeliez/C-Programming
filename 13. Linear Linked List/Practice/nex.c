#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node *link;
} *head;

int main() {
    head = NULL;    // initialize to null

    head = malloc(sizeof(struct node));     // memory allocation to struct pointer
    head->value = 45;    // initialize value
    head->link = NULL;  // update link to null to indicate that this is the last node
    head = tail;


    return 0;
}