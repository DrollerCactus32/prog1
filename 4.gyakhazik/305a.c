#include <stdio.h>

int is_sorted(int arr[], int n) {
    if (n <= 1) {
        return 1;
    }

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int sorted_arr[] = {1, 3, 5, 5, 8};
    int unsorted_arr[] = {1, 10, 2, 8};
    int empty_arr[0];
    int single_arr[] = {42};

    int n1 = 5;
    int n2 = 4;
    int n3 = 0;
    int n4 = 1;

    printf("Rendezett tömb {1, 3, 5, 5, 8}: %d\n", is_sorted(sorted_arr, n1));
    printf("Nem rendezett tömb {1, 10, 2, 8}: %d\n", is_sorted(unsorted_arr, n2));
    printf("Üres tömb: %d\n", is_sorted(empty_arr, n3));
    printf("Egyelemű tömb {42}: %d\n", is_sorted(single_arr, n4));

    return 0;
}