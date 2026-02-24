#include <stdio.h>

int main()
{
    int n;
    printf("Adj meg egy pozitiv egesz szamot:");
    scanf("%d", &n);

    for (int i=1; i<=n; i++)
    {
        if(i%4==0)
        {
            printf("A szamodig 4-el oszthato szamok:%d\n", i);
        }
    }
return 0;
}