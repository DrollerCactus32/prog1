#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void shuffle(int n, int tomb[]) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = temp;
    }
}

int main() {
    srand(time(NULL));

    char lowercase[] = "abcdefghijklmnopqrstuvwxyz";
    char uppercase[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char digits[] = "0123456789";
    char special[] = ".,;'";
    char all[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789.,;'";

    int length = 8 + rand() % 5;
    char password[13];

    password[0] = lowercase[rand() % strlen(lowercase)];
    password[1] = uppercase[rand() % strlen(uppercase)];
    password[2] = digits[rand() % strlen(digits)];
    password[3] = special[rand() % strlen(special)];

    for (int i = 4; i < length; i++) {
        password[i] = all[rand() % strlen(all)];
    }

    int indices[12];
    for (int i = 0; i < length; i++) {
        indices[i] = i;
    }
    
    for (int i = length - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp_idx = indices[i];
        indices[i] = indices[j];
        indices[j] = temp_idx;
    }

    char shuffled_password[13];
    for (int i = 0; i < length; i++) {
        shuffled_password[i] = password[indices[i]];
    }
    shuffled_password[length] = '\0';

    printf("%s\n", shuffled_password);

    return 0;
}