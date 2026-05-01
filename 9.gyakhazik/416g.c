#include <stdlib.h>

void shuffle(int n, int tomb[]) {
    for (int i = n - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        int temp = tomb[i];
        tomb[i] = tomb[j];
        tomb[j] = temp;
    }
}