#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    int n, also, felso, i;

    srand(time(NULL));

    printf("Hány db random számot kérsz?\n");
    scanf("%d", &n);

    printf("Alsó határ: ");
    scanf("%d", &also);

    printf("Felső határ (zárt intervallum): ");
    scanf("%d", &felso);

    if (also > felso) 
    {
        printf("Hiba: Az alsó határ nem lehet nagyobb a felsőnél!\n");
        return 1;
    }

    printf("\nA generált számok: ");
    for (i = 0; i < n; i++) 
    {
        int veletlen = (rand() % (felso - also + 1)) + also;
        printf("%d ", veletlen);
    }
    printf("\n");

    return 0;
}