#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Stats {
    int min;
    int max;
    double avg;
};

struct Stats get_stats(int arr[], int size) {
    struct Stats s;
    s.min = arr[0];
    s.max = arr[0];
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < s.min) s.min = arr[i];
        if (arr[i] > s.max) s.max = arr[i];
        sum += arr[i];
    }
    s.avg = (double)sum / size;
    return s;
}

int main() {
    int tomb[10];
    
    srand(123);

    printf("A tomb elemei: ");
    for (int i = 0; i < 10; i++) {
        tomb[i] = rand() % (99 - 10 + 1) + 10;
        printf("%d%s", tomb[i], (i == 9) ? "" : ", ");
    }
    printf("\n");

    struct Stats eredmeny = get_stats(tomb, 10);

    printf("Legkisebb elem: %d\n", eredmeny.min);
    printf("Legnagyobb elem: %d\n", eredmeny.max);
    printf("Az elemek atlaga: %.1f\n", eredmeny.avg);

    return 0;
}