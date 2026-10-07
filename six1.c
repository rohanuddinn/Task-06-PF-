#include <stdio.h>

int main() {
    int i, price;

    for (i = 1; i <= 10; i++) {
        price = 500 + (i - 1) * 50;
        printf("Show %d = Rs. %d\n", i, price);
    }

    return 0;
}