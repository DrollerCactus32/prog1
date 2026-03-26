#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, i;

    printf("Hány db számot szeretnél bevinni?\n");
    scanf("%d", &n);

    // Memória foglalása
    int *eredeti = (int *)malloc(n * sizeof(int));
    int *masolat = (int *)malloc(n * sizeof(int));

    // Adatok bekérése
    for (i = 0; i < n; i++) 
    {
        printf("%d. szám: ", i + 1);
        scanf("%d", &eredeti[i]);
    }

    // Másolat készítése 
    for (i = 0; i < n; i++) 
    {
        masolat[i] = abs(eredeti[i]);
    }

    // Abszolútértékek kiíratása
    printf("\nA bevitt számok abszolútértékei: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d", masolat[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");

    // Eredeti számok kiíratása
    printf("A megadott számok: ");
    for (i = 0; i < n; i++) 
    {
        printf("%d", eredeti[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");

    // Felszabadítjuk a lefoglalt memóriát
    free(eredeti);
    free(masolat);

    return 0;
}