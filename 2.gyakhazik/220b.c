#include <stdio.h>

int main()
{
    int n;
    printf("Adj meg egy pozitiv egesz szamot:");
    scanf("%d", &n);

    for (int i=n; i>=1; i--)
    {
        if (i%2==1)
        {
            printf("A szamodnal kisebb paratlan szamok: %d\n", i);
        }
    }


    return 0;
}