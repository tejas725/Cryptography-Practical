#include <stdio.h>

void encrypt(char *message, int shift)
{
    int i = 0;

    while (message[i] != '\0')
    {
        if (message[i] >= 'a' && message[i] <= 'z')
        {
            message[i] = 'a' + (message[i] - 'a' + shift) % 26;
        }
        else if (message[i] >= 'A' && message[i] <= 'Z')
        {
            message[i] = 'A' + (message[i] - 'A' + shift) % 26;
        }

        i++;
    }

    printf("Encrypted message: %s\n", message);
}

void decrypt(char *message, int shift)
{
    int i = 0;

    while (message[i] != '\0')
    {
        if (message[i] >= 'a' && message[i] <= 'z')
        {
            message[i] = 'a' + (message[i] - 'a' - shift + 26) % 26;
        }
        else if (message[i] >= 'A' && message[i] <= 'Z')
        {
            message[i] = 'A' + (message[i] - 'A' - shift + 26) % 26;
        }

        i++;
    }

    printf("Decrypted message: %s\n", message);
}

int main()
{
    int choice;
    char message[100];

    printf("1. Encrypt\n");
    printf("2. Decrypt\n");
    printf("Choose an option: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter a message: ");
        scanf(" %[^\n]", message);
        encrypt(message, 3);
        break;

    case 2:
        printf("Enter the encrypted message: ");
        scanf(" %[^\n]", message);
        decrypt(message, 3);
        break;

    default:
        printf("Invalid choice. Please select 1 or 2.\n");
        return 1;
    }

    return 0;
}