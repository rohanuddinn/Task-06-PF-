#include <stdio.h>

int main() {
    int stock[10], search, i, found = 0;

    for (i = 0; i < 10; i++) {
        printf("Enter stock for shelf %d: ", i);
        scanf("%d", &stock[i]);
    }

    printf("\nReverse order:\n");

    for (i = 9; i >= 0; i--)
        printf("Shelf %d = %d\n", i, stock[i]);

    printf("\nEnter stock count to search: ");
    scanf("%d", &search);

    for (i = 0; i < 10; i++) {
        if (stock[i] == search) {
            printf("Found at shelf index %d\n", i);
            found = 1;
        }
    }

    if (found == 0)
        printf("Stock count does not exist\n");

    return 0;
}