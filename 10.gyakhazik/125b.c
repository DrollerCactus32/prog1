#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINES 100
#define MAX_LEN 100

int compareNames(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int is_pti(const char *szak) {
    if (strlen(szak) != 3) return 0;
    return (tolower(szak[0]) == 'p' && 
            tolower(szak[1]) == 't' && 
            tolower(szak[2]) == 'i');
}

int main() {
    FILE *file = fopen("nevek.csv", "r");
    if (!file) {
        perror("Hiba a fajl megnyitasakor");
        return 1;
    }

    char line[MAX_LEN];
    char *pti_nevek[MAX_LINES];
    int count = 0;

    while (fgets(line, sizeof(line), file)) {
        line[strcspn(line, "\r\n")] = 0;

        char *nev = strtok(line, ",");
        char *kor = strtok(NULL, ",");
        char *szak = strtok(NULL, ",");

        if (nev && szak && is_pti(szak)) {
            char *formazott_nev = strdup(nev);
            formazott_nev[0] = toupper(formazott_nev[0]);
            
            pti_nevek[count++] = formazott_nev;
        }
    }
    fclose(file);

    qsort(pti_nevek, count, sizeof(char *), compareNames);

    for (int i = 0; i < count; i++) {
        printf("%s%s", pti_nevek[i], (i < count - 1) ? ", " : "");
        free(pti_nevek[i]);
    }
    printf("\n");

    return 0;
}