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
    int n, min_val, max_val;

    printf("Hany db random szamot kersz?\n");
    scanf("%d", &n);
    printf("Also hatar: ");
    scanf("%d", &min_val);
    printf("Felso hatar (zart intervallum): ");
    scanf("%d", &max_val);

    int *tomb = malloc(n * sizeof(int));
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        tomb[i] = rand() % (max_val - min_val + 1) + min_val;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tomb[j] > tomb[j + 1]) {
                int temp = tomb[j];
                tomb[j] = tomb[j + 1];
                tomb[j + 1] = temp;
            }
        }
    }

    printf("\nA generalt szamok: ");
    for (int i = 0; i < n; i++) printf("%d ", tomb[i]);
    printf("\n");

    struct Stats eredmeny = get_stats(tomb, n);
    printf("Legkisebb elem: %d\n", eredmeny.min);
    printf("Legnagyobb elem: %d\n", eredmeny.max);
    printf("Az elemek atlaga: %.1f\n", eredmeny.avg);

    free(tomb);
    return 0;
}