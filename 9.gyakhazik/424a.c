#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generator(int sorok, int min_hossz, int max_hossz) {
    srand(time(NULL));
    for (int i = 0; i < sorok; i++) {
        int aktualis_hossz = min_hossz + (rand() % (max_hossz - min_hossz + 1));
        for (int j = 0; j < aktualis_hossz; j++) {
            putchar(33 + (rand() % 94));
        }
        putchar('\n');
    }
}

void kereso(const char *fajlnev) {
    FILE *f = fopen(fajlnev, "r");
    if (!f) {
        fprintf(stderr, "Hiba: A fajl nem nyithato meg!\n");
        return;
    }

    int c, max_hossz = -1, max_sor_szama = 0;
    int akt_hossz = 0, akt_sor_szama = 1;

    while ((c = fgetc(f)) != EOF) {
        if (c == '\n') {
            if (akt_hossz > max_hossz) {
                max_hossz = akt_hossz;
                max_sor_szama = akt_sor_szama;
            }
            akt_hossz = 0;
            akt_sor_szama++;
        } else {
            akt_hossz++;
        }
    }

    if (akt_hossz > max_hossz && akt_hossz > 0) {
        max_hossz = akt_hossz;
        max_sor_szama = akt_sor_szama;
    }

    if (max_sor_szama > 0) {
        printf("%d %d\n", max_sor_szama, max_hossz);
    }
    fclose(f);
}

int main(int argc, char *argv[]) {
    if (argc == 4) {
        generator(atoi(argv[1]), atoi(argv[2]), atoi(argv[3]));
    } else if (argc == 2) {
        kereso(argv[1]);
    } else {
        printf("Hasznalat:\n");
        printf("  Generalas: %s <sorok> <min> <max>\n", argv[0]);
        printf("  Kereses:   %s <fajlnev>\n", argv[0]);
    }
    return 0;
}