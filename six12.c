#include <stdio.h>

int main() {
    int code[5], speed[5];
    int left, right;
    int high = 0, medium = 0, normal = 0;
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter priority code (0-15) for vehicle %d: ", i + 1);
        scanf("%d", &code[i]);

        printf("Enter speed: ");
        scanf("%d", &speed[i]);
    }

    for (i = 0; i < 5; i++) {
        left = code[i] << 2;
        right = code[i] >> 1;

        printf("\nVehicle %d\n", i + 1);
        printf("Original = %d\n", code[i]);
        printf("Left shift = %d\n", left);
        printf("Right shift = %d\n", right);
        printf("Speed = %d km/h\n", speed[i]);

        if (left > 20 && speed[i] >= 80) {
            printf("High Priority\n");
            high++;
        }
        else if (left > 10 && speed[i] >= 60) {
            printf("Medium Priority\n");
            medium++;
        }
        else {
            printf("Normal Priority\n");
            normal++;
        }
    }

    printf("\nHigh Priority = %d\n", high);
    printf("Medium Priority = %d\n", medium);
    printf("Normal Priority = %d\n", normal);

    return 0;
}