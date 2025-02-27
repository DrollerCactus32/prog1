#include <stdio.h>

int main() {
    int a, b;

    printf("Add meg a téglalap egyik oldalának hosszát: ");
    scanf("%d", &a);
    printf("Add meg a téglalap másik oldalának hosszát: ");
    scanf("%d", &b);

    int kerulet = 2 * (a + b);
    int terulet = a * b;

    printf("\nA téglalap kerülete: %d\n", kerulet);
    printf("A téglalap területe: %d\n", terulet);

    return 0;
}
