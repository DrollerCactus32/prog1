#include <stdio.h>

void line(char c, int length) 
{
    for (int i = 0; i < length; i++) 
    {
        putchar(c);
    }
    putchar('\n');
}

int main() 
{
    printf("hello\n");
    line('-', 40);
    printf("world\n");
    
    return 0;
}