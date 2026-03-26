#include <stdio.h>

void feltolt(char *tomb) 
{
    int i;
    for (i = 0; i < 26; i++) 
    {
        tomb[i] = 'a' + i;
    }
    tomb[26] = '\0';
}

int main() 
{
    char abc[27];
    feltolt(abc);
    printf("%s\n", abc);
    return 0;
}