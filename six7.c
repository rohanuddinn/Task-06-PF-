#include <stdio.h>

int main() {
    int choice;

    do {
        printf("\n1. Add Item\n");
        printf("2. Remove Item\n");
        printf("3. View Total\n");
        printf("4. Checkout\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
            printf("Item added\n");
        else if (choice == 2)
            printf("Item removed\n");
        else if (choice == 3)
            printf("Total viewed\n");
        else if (choice == 4)
            printf("Checkout\n");
        else
            printf("Invalid choice\n");

    } while (choice != 4);

    return 0;
}