#include <stdio.h>
#include <stdbool.h>

bool valid_triangle(double a, double b, double c);

int main() {
    double x = 3.0, y = 4.0, z = 5.0;
    
    if (valid_triangle(x, y, z)) {
        printf("A %.1f, %.1f, %.1f oldalakból szerkeszthető háromszög.\n", x, y, z);
    } else {
        printf("A %.1f, %.1f, %.1f oldalakból NEM szerkeszthető háromszög.\n", x, y, z);
    }

    x = 1.0; y = 2.0; z = 10.0;
    if (valid_triangle(x, y, z)) {
        printf("A %.1f, %.1f, %.1f oldalakból szerkeszthető háromszög.\n", x, y, z);
    } else {
        printf("A %.1f, %.1f, %.1f oldalakból NEM szerkeszthető háromszög.\n", x, y, z);
    }

    return 0;
}

bool valid_triangle(double a, double b, double c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return false;
    }
    
    if (a + b > c && a + c > b && b + c > a) {
        return true;
    }
    
    return false;
}