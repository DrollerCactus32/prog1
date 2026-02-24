#include <stdio.h>

int main()
{
int osszeg=0;

    for (int i=0; i<=100; i++)
    {
        osszeg+=i;
    }
    printf("Egesz szamok osszege 1-tol 100-ig: %d\n", osszeg);

return 0;
}