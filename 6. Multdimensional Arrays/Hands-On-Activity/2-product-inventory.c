#include <stdio.h>
#include <string.h>

#define MAX_PRODUCTS 100

struct Product {
    char name[50];
    int quantity;
};

void addProduct(struct Product inventory[], int *numProducts) {
    if (*numProducts == MAX_PRODUCTS) {
        printf("Inventory is full. Cannot add more products.\n");
        return;
    }

    struct Product newProduct;
    printf("Enter the name of the product: ");
    scanf("%s", newProduct.name);
    printf("Enter the quantity: ");
    scanf("%d", &newProduct.quantity);

    inventory[*numProducts] = newProduct;
    (*numProducts)++;

    printf("Product added successfully.\n");
}

void updateQuantity(struct Product inventory[], int numProducts) {
    char productName[50];
    int newQuantity;

    printf("Enter the name of the product to update: ");
    scanf("%s", productName);
    printf("Enter the new quantity: ");
    scanf("%d", &newQuantity);

    for (int i = 0; i < numProducts; i++) {
        if (strcmp(inventory[i].name, productName) == 0) {
            inventory[i].quantity = newQuantity;
            printf("Quantity updated successfully.\n");
            return;
        }
    }

    printf("Product not found in inventory.\n");
}

void displayInventory(struct Product inventory[], int numProducts) {
    printf("Current Inventory:\n");
    for (int i = 0; i < numProducts; i++) {
        printf("Product: %s, Quantity: %d\n", inventory[i].name, inventory[i].quantity);
    }
}

int main() {
    struct Product inventory[MAX_PRODUCTS];
    int numProducts = 0;
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Add a new product\n");
        printf("2. Update product quantity\n");
        printf("3. Display inventory\n");
        printf("4. Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addProduct(inventory, &numProducts);
                break;
            case 2:
                updateQuantity(inventory, numProducts);
                break;
            case 3:
                displayInventory(inventory, numProducts);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
