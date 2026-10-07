#include <stdio.h>

int main() {
    int pin, digit, sum = 0, reverse = 0;

    printf("Enter a 4 to 6 digit PIN: ");
    scanf("%d", &pin);

    while (pin > 0) {
        digit = pin % 10;
        sum = sum + digit;
        reverse = reverse * 10 + digit;
        pin = pin / 10;
    }

    printf("Sum of digits = %d\n", sum);
    printf("Reversed PIN = %d\n", reverse);

    return 0;
}