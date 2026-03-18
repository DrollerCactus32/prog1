#include <stdio.h>
#include <string.h>

typedef char* string;

int match_ends(int n, string words[]) 
{
    int count = 0;
    
    for (int i = 0; i < n; i++)
    {
        int len = strlen(words[i]);
        if (len >= 2 && words[i][0] == words[i][len - 1]) 
        {
            count++;
        }
    }
    
    return count;
}

int main() 
{
    string szavak1[] = {"aba", "xyz", "aa", "x", "bbb"};
    int szavak1_meret = 5;
    printf("Eredmeny 1: %d\n", match_ends(szavak1_meret, szavak1));

    string szavak2[] = {"", "x", "xy", "xyx", "xx"};
    int szavak2_meret = 5;
    printf("Eredmeny 2: %d\n", match_ends(szavak2_meret, szavak2));

    string szavak3[] = {"aaa", "be", "abc", "hello"};
    int szavak3_meret = 4;
    printf("Eredmeny 3: %d\n", match_ends(szavak3_meret, szavak3));

    return 0;
}