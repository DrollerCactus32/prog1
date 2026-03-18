#include <stdio.h>
#include <string.h>

int rfind_char(const char *s, char c) 
{
    int last_index = -1;
    
    for (int i = 0; s[i] != '\0'; i++) 
    {
        if (s[i] == c) 
        {
            last_index = i;
        }
    }
    
    return last_index;
}

int main() 
{
    printf("%d\n", rfind_char("Abba", 'b'));
    printf("%d\n", rfind_char("Abba", 'a'));
    printf("%d\n", rfind_char("Abba", 'x'));
    printf("%d\n", rfind_char("Aladar", 'a'));

    return 0;
}