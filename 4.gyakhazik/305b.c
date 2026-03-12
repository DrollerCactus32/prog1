#include <stdio.h>

int get_min(int arr[], int n);
int get_max(int arr[], int n);

int main() {
    int numbers[] = {12, 5, 8, 22, 1, 17, -3, 9};
    int size = 8;

    int min = get_min(numbers, size);
    int max = get_max(numbers, size);

    printf("A tomb elemei: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\nLegkisebb elem: %d\n", min);
    printf("Legnagyobb elem: %d\n", max);

    return 0;
}

int get_min(int arr[], int n) {
    int min = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    return min;
}

int get_max(int arr[], int n) {
    int max = arr[0];
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;
}