#include <stdio.h>
#include <stdlib.h>

int get_skyscraper_diff_sum(int heights[], int n) {
    int total_diff = 0;
    
    for (int i = 0; i < n - 1; i++) {
        total_diff += abs(heights[i] - heights[i + 1]);
    }
    
    return total_diff;
}

int main() {
    int skyscrapers[] = {2, 1, 0, 2, 4};
    int size = 5;

    int result = get_skyscraper_diff_sum(skyscrapers, size);

    printf("A felhokarcolok magassagkulonbsegenek osszege: %d\n", result);

    return 0;
}