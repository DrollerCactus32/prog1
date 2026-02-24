#include <stdio.h>

int main() 
{
    for (int i = 32; i <= 126; i++) 
    {
        printf("%d: %c\n", i, i);
    }
    
        int osszeg = 0;
        for (char c = 'A'; c <= 'Z'; c++) 
        {
            osszeg += c;
        }
        printf("A nagybetuk ASCII osszege: %d\n", osszeg);
        
    
    return 0;
}