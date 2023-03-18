#include <stdio.h>

int main() {
    int i, j, k, l;
    for (i = 0; i < 100; i++) {
        for (j = 0; j < 100; j++) {
            if (i <= j) {
                continue;
            }
            for (k = 0; k < 100; k++) {
                if (k <= j) {
                    continue;
                }
                for (l = 0; l < 100; l++) {
                    if (l <= k) {
                        continue;
                    }
                    putchar(i / 10 + '0');
                    putchar(i % 10 + '0');
                    putchar(' ');
                    putchar(j / 10 + '0');
                    putchar(j % 10 + '0');
                    putchar(' ');
                    putchar(k / 10 + '0');
                    putchar(k % 10 + '0');
                    putchar(' ');
                    putchar(l / 10 + '0');
                    putchar(l % 10 + '0');
                    if (i < 99 || j < 98 || k < 97 || l < 96) {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
    }
    return 0;
}

