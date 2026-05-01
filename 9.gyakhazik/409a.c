#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Nem adtál meg egyetlen szót sem!\n");
        return 1;
    }

    int min_len = -1;

    for (int i = 1; i < argc; i++) {
        int current_len = strlen(argv[i]);
        if (min_len == -1 || current_len < min_len) {
            min_len = current_len;
        }
    }

    for (int i = 1; i < argc; i++) {
        if (strlen(argv[i]) == min_len) {
            printf("%s\n", argv[i]);
        }
    }

    return 0;
}