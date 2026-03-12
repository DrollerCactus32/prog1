#include <stdio.h>

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
    int numbers[] = {4, 7, 34, 23, 67};
    int size = 5;

    printf("A tomb elemei:\n");
    print_array(numbers, size);

    int single[] = {100};
    printf("\nEgyelemu tomb:\n");
    print_array(single, 1);

    return 0;
}