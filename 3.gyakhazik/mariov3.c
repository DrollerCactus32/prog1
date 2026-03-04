#include <stdio.h>

int main() 
{
    int magassag;

    printf("Add meg a haromszog magassagat: ");
    if (scanf("%d", &magassag) != 1) 
    {
        printf("Kérlek, nagyobb számot adj meg!\n");
        return 1;
    }

    for (int i = 1; i <= magassag; i++) 
    {
        
        
        for (int j = 0; j < magassag - i; j++) 
        {
            printf(" ");
        }

        
        for (int j = 0; j < i; j++) 
        {
            printf("#");
        }

     
        printf("  ");

        for (int j = 0; j < i; j++) 
        {
            printf("#");
        }

        printf("\n");
    }

    return 0;
}