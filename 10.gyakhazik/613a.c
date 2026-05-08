#include <stdio.h>

int main() {
    int s1, s2, s3, s4, s5, s6;
    long target_prod = 996300;
    int target_sum = 90;

    for (s1 = 1; s1 <= 40; s1++) {
        if (target_prod % s1 != 0) continue;
        for (s2 = s1 + 1; s2 <= 41; s2++) {
            if (target_prod % (s1 * s2) != 0) continue;
            for (s3 = s2 + 1; s3 <= 42; s3++) {
                long p3 = (long)s1 * s2 * s3;
                if (target_prod % p3 != 0) continue;
                for (s4 = s3 + 1; s4 <= 43; s4++) {
                    long p4 = p3 * s4;
                    if (target_prod % p4 != 0) continue;
                    for (s5 = s4 + 1; s5 <= 44; s5++) {
                        long p5 = p4 * s5;
                        if (target_prod % p5 != 0) continue;
                        
                        s6 = target_sum - (s1 + s2 + s3 + s4 + s5);
                        
                        if (s6 > s5 && s6 <= 45) {
                            if (p5 * s6 == target_prod) {
                                printf("%d, %d, %d, %d, %d, %d\n", s1, s2, s3, s4, s5, s6);
                                return 0;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}