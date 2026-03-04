#include <stdio.h>

int legnagyobb_oszto(int n) 
{
    if (n <= 1) return n;
    
    for (int i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0) 
        {
            return n / i;
        }
    }
    return 1;
}

int main() 
{
    for (int i = 1; i <= 50; i++) 
    {
        printf("%d legnagyobb osztoja: %d\n", i, legnagyobb_oszto(i));
    }
    return 0;
}