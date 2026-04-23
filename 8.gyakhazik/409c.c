#include <stdio.h>
#include <stdlib.h>

int get_number_of_lines(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        return -1;
    }

    int count = 0;
    int ch;
    int last = '\n';

    while ((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            count++;
        }
        last = ch;
    }

    if (last != '\n' && last != EOF) {
        count++;
    }

    fclose(fp);
    return count;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Hiba! Adja meg egy szoveges allomany nevet!\n");
        return 1;
    }

    int lines = get_number_of_lines(argv[1]);

    if (lines == -1) {
        fprintf(stderr, "Hiba! A %s nevu file-t nem sikerult megnyitni!\n", argv[1]);
        return 2;
    }

    printf("%d\n", lines);

    return 0;
}