#include <stdio.h>

int main() {
    int years, i;
    float amount, factor;

    printf("Enter initial amount: ");
    scanf("%f", &amount);

    printf("Enter number of years: ");
    scanf("%d", &years);

    printf("Enter growth factor: ");
    scanf("%f", &factor);

    for (i = 1; i <= years; i++) {
        amount = amount * factor;
    }

    printf("Final amount = %.2f\n", amount);

    return 0;
}