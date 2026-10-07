#include <stdio.h>

int main() {
    int level, hours = 0;

    printf("Enter starting water level: ");
    scanf("%d", &level);

    while (level != 1) {
        printf("Level = %d\n", level);

        if (level % 2 == 0) {
            level = level / 2;
        } else {
            level = 3 * level + 1;
        }

        hours++;
    }

    printf("Level = 1\n");
    printf("Total hours = %d\n", hours);

    return 0;
}