#include <stdio.h>
#include <string.h>

int main() 
{
    char puffer[1024];
    int szo_db = 0;
    int max_hossz = 0;

    printf("Adj meg szavakat '*' végjelig!\n");

    while (1) 
    {
        printf("Szó: ");
        if (fgets(puffer, sizeof(puffer), stdin) == NULL) 
        {
            break;
        }

        puffer[strcspn(puffer, "\n")] = '\0';

        if (strcmp(puffer, "*") == 0) 
        {
            break;
        }

        int aktualis_hossz = strlen(puffer);
        szo_db++;

        if (aktualis_hossz > max_hossz) 
        {
            max_hossz = aktualis_hossz;
        }
    }

    printf("\n%d db szót adtál meg. ", szo_db);
    printf("A leghosszabb szó %d karakterből áll.\n", max_hossz);

    return 0;
}