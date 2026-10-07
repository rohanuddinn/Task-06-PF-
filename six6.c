#include <stdio.h>

int main() {
    int mark;

    do {
        printf("Enter mark (0-100): ");
        scanf("%d", &mark);
    } while (mark < 0 || mark > 100);

    if (mark >= 50)
        printf("Pass");
    else
        printf("Fail");

    return 0;
}