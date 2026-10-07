#include <stdio.h>

int main() {
    int code[10];
    int left, right;
    int accepted = 0, flagged = 0;
    int highest, i;

    for (i = 0; i < 10; i++) {
        printf("Enter access code %d: ", i + 1);
        scanf("%d", &code[i]);
    }

    highest = code[0];

    for (i = 0; i < 10; i++) {
        left = code[i] << 2;
        right = code[i] >> 1;

        printf("\nCode = %d\n", code[i]);
        printf("Left shift = %d\n", left);
        printf("Right shift = %d\n", right);

        if (left > 100 && right % 2 == 0) {
            printf("Accepted\n");
            accepted++;
        }
        else {
            printf("Flagged\n");
            flagged++;
        }

        if (code[i] > highest)
            highest = code[i];
    }

    printf("\nAccepted = %d\n", accepted);
    printf("Flagged = %d\n", flagged);
    printf("Highest original code = %d\n", highest);

    printf("Codes whose right-shifted value is greater than 20:\n");

    for (i = 0; i < 10; i++) {
        right = code[i] >> 1;

        if (right > 20)
            printf("%d\n", code[i]);
    }

    return 0;
}