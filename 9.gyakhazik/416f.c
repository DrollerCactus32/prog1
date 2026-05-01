#include <stdlib.h>

int choice(const int n, const int tomb[]) {
    return tomb[rand() % n];
}