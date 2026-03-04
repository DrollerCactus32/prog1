#include <stdio.h>

int get_fibonacci(int n) 
{
    if (n <= 0) return 0;
    if (n == 1) return 1;

    int a = 0, b = 1, n_edik = 0;

    for (int i = 2; i <= n; i++) 
    {
        n_edik = a + b;
        a = b;
        b = n_edik;
    }
    return b;
}

int main() 
{
    for (int i = 0; i < 100; i++) 
    {
        printf("%d. elem: %d\n", i, get_fibonacci(i));
    }
    return 0;
}