#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp = fopen("valos_szamok.txt", "r");
    if (fp == NULL) {
        fprintf(stderr, "Hiba! A fajlt nem sikerult megnyitni!\n");
        return 1;
    }

    double sum = 0.0;
    double current;

    while (fscanf(fp, "%lf", &current) == 1) {
        sum += current;
    }

    fclose(fp);

    printf("%.20f\n", sum);

    return 0;
}