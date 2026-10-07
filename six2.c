#include <stdio.h>

int main() {
    int n, score, total = 0;
    float average;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter score of student %d: ", i);
        scanf("%d", &score);
        total = total + score;
    }

    average = (float)total / n;

    printf("Total Score = %d\n", total);
    printf("Average Score = %.2f\n", average);

    return 0;
}