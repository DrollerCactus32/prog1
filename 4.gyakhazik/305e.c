#include <stdio.h>

int is_even(int n);
int is_odd(int n);

int main() {
    int test_num = 42;

    printf("Szám: %d\n", test_num);
    printf("Páros-e (is_even): %d\n", is_even(test_num));
    printf("Páratlan-e (is_odd): %d\n", is_odd(test_num));

    test_num = 7;
    printf("\nSzám: %d\n", test_num);
    printf("Páros-e (is_even): %d\n", is_even(test_num));
    printf("Páratlan-e (is_odd): %d\n", is_odd(test_num));

    return 0;
}

int is_even(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}

int is_odd(int n) {
    return !is_even(n);
}