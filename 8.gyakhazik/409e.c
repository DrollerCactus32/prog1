#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fin = fopen("in.txt", "r");
    if (fin == NULL) {
        fprintf(stderr, "Hiba! Az in.txt nem nyithato meg!\n");
        return 1;
    }
    printf("# in.txt sikeresen megnyitva\n");

    FILE *fout = fopen("out.txt", "w");
    if (fout == NULL) {
        fprintf(stderr, "Hiba! Az out.txt nem hozhato letre!\n");
        fclose(fin);
        return 1;
    }

    printf("# 0,5-nel nagyobb szamok szurese...\n");

    double current;
    int count = 0;

    while (fscanf(fin, "%lf", &current) == 1) {
        if (current > 0.5) {
            fprintf(fout, "%f\n", current);
            count++;
        }
    }

    printf("# szures vege\n");

    fclose(fin);
    fclose(fout);
    printf("# out.txt bezarva\n");
    printf("# out.txt-be kiirt szamok mennyisege: %d db\n", count);

    return 0;
}