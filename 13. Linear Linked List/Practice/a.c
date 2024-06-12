#include <stdio.h>

struct Node;

typedef struct Node{
    int value;
    struct Node *next;
} node;

int main() {
    node n1, n2, n3;
    n1.next = &n2;
    n2.next = &n3;
    return 0;
}