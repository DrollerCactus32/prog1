#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void get_stats(int arr[], int size, int *min, int *max, double *avg) {
    *min = arr[0];
    *max = arr[0];
    int sum = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < *min) *min = arr[i];
        if (arr[i] > *max) *max = arr[i];
        sum += arr[i];
    }
    *avg = (double)sum / size;
}

int main() {
    int tomb[10];
    int min, max;
    double avg;

    srand(time(NULL));

    printf("A tomb elemei: ");
    for (int i = 0; i < 10; i++) {
        tomb[i] = rand() % (99 - 10 + 1) + 10;
        printf("%d%s", tomb[i], (i == 9) ? "" : ", ");
    }
    printf("\n");

    get_stats(tomb, 10, &min, &max, &avg);

    printf("Legkisebb elem: %d\n", min);
    printf("Legnagyobb elem: %d\n", max);
    printf("Az elemek atlaga: %.1f\n", avg);

    return 0;
}