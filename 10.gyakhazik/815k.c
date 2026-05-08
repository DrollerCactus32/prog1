#include <stdio.h>
#include <stdbool.h>

int main() {
    bool cellak[601] = {false};
    int i, j;

    for (i = 1; i <= 600; i++) {
        for (j = i; j <= 600; j += i) {
            cellak[j] = !cellak[j];
        }
    }

    int elso = 1;
    for (i = 1; i <= 600; i++) {
        if (cellak[i]) {
            if (!elso) {
                printf(", ");
            }
            printf("%d", i);
            elso = 0;
        }
    }
    printf("\n");

    for (i = 1; i <= 600; i++) {
        if (cellak[i]) {
            printf("%d", i);
        }
    }
    printf("\n");

    return 0;
}