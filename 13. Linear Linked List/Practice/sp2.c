#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct node {
        char value[50];
        struct node *next;		//pointer to structure node
    }*current, *head, *tail;

    // Initialize pointers
    current = NULL;
    head = NULL;
    tail = NULL;

    // Allocate memory space for the first node
    current = malloc(sizeof(struct node)); // 1000
    strcpy(current->value, "Jayson");
    current->next = NULL;
    head = current;
    tail = current;

    // Allocate memory space for the second node
    current = malloc(sizeof(struct node)); // 2000
    strcpy(current->value, "James");
    current->next = NULL;
    tail->next = current;
    tail = current;

    // Allocate memory space for the third node
    current = malloc(sizeof(struct node)); // 3000
    strcpy(current->value, "Mayor");
    current->next = NULL;
    tail->next = current;
    tail = current;

    // Display the list
    current = head;
    while (current != NULL)
    {
        printf("%s\n", current->value);
        current = current->next;
    }
    // Search functionality in a loop until the string is found
    char strtosearch[50];
    int found;
    do {
        found = 0;
        printf("Type the string to search: ");
        //scanf("%s", strtosearch);
		gets(strtosearch);
		
        current = head;
        while (current != NULL)
        {
            if (strcmp(current->value, strtosearch) == 0)
            {
                found = 1;
                break;
            }
            else
                current = current->next;
        }

        if (found == 0)
            printf("\n%s is not on the list. Try again.\n", strtosearch);
        else
            printf("\n%s is on the list!\n", strtosearch);

    } while (found == 0);

    // Free allocated memory
    current = head;
    struct node *temp;
    while (current != NULL)
    {
        temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}