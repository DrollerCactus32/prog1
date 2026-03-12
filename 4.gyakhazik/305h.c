#include <stdio.h>
#include <stdlib.h>

void make_absolute(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = abs(arr[i]);
        }
    }
}

void print_array(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int numbers[] = {-1, 4, -7, 0, -15, 22, -3};
    int size = 7;

    print_array(numbers, size);
    
    make_absolute(numbers, size);
    
    print_array(numbers, size);

    return 0;
}