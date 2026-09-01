#include <stdio.h>

void monoEncrypt(char *text, char *key);
void monoDecrypt(char *text, char *rev);

int main() {

    char text[] = "hello";
    char key[] = "qwertyuiopasdfghjklzxcvbnm";
    char rev[26];

    // Encrypt
    monoEncrypt(text, key);
    printf("Encrypted: %s\n", text);

    // Create reverse key
    for (int i = 0; i < 26; i++) {
        rev[key[i] - 'a'] = 'a' + i;
    }

    // Decrypt
    monoDecrypt(text, rev);
    printf("Decrypted: %s\n", text);

    return 0;
}

void monoEncrypt(char *text, char *key) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = key[text[i] - 'a'];
        }
    }
}

void monoDecrypt(char *text, char *rev) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = rev[text[i] - 'a'];
        }
    }
}
