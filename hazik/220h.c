#include <stdio.h>

int main()
{
    int n;
    printf("Adj meg egy pozitiv egesz szamot:");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        printf("%d", i);

        if (i<n)
        {
            printf(" -> ");
        }
    }
    printf("\n");

    return 0;
}