#include <stdio.h>

int main() {
    int id, qty;
    char name[20];

    printf("Enter Product ID: ");
    scanf("%d", &id);

    printf("Enter Product Name: ");
    scanf("%s", name);

    printf("Enter Quantity: ");
    scanf("%d", &qty);

    printf("\n--- Inventory Details ---\n");
    printf("Product ID   : %d\n", id);
    printf("Product Name : %s\n", name);
    printf("Quantity     : %d\n", qty);

    return 0;
}