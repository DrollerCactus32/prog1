#include <stdio.h>

int char_count(const char *s, char c) 
{
    int count = 0;
    
    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (s[i] == c) 
        {
            count++;
        }
    }
    
    return count;
}

int main() 
{
    printf("%d\n", char_count("Abba", 'b'));
    printf("%d\n", char_count("Abba", 'a'));
    printf("%d\n", char_count("Abba", 'x'));

    return 0;
}