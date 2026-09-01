#include <stdio.h>
#include <string.h>

int main() {
    char password[50];
    char encrypted[50];
    int i;

    printf("Enter password: ");
    scanf("%s", password);

    printf("Masked password: ");
    for (i = 0; password[i] != '\0'; i++) {
        printf("*");
    }

    for (i = 0; password[i] != '\0'; i++) {
        encrypted[i] = password[i] + 3;
    }
    encrypted[i] = '\0';

    printf("\nEncrypted password: %s\n", encrypted);

    return 0;
}