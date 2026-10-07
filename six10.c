#include <stdio.h>
#include <ctype.h>

int main() {
    char username[21];
    int i, vowels = 0, consonants = 0;

    printf("Enter username: ");
    scanf("%20s", username);

    for (i = 0; username[i] != '\0'; i++) {
        if (username[i] == 'a' || username[i] == 'e' ||
            username[i] == 'i' || username[i] == 'o' ||
            username[i] == 'u' || username[i] == 'A' ||
            username[i] == 'E' || username[i] == 'I' ||
            username[i] == 'O' || username[i] == 'U') {
            vowels++;
        }
        else if ((username[i] >= 'a' && username[i] <= 'z') ||
                 (username[i] >= 'A' && username[i] <= 'Z')) {
            consonants++;
        }

        username[i] = toupper(username[i]);
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);
    printf("Uppercase username = %s\n", username);

    return 0;
}