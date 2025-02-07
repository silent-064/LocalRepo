#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, x, i, tot;

    scanf("%d", &a); 

    while (a--) {
        scanf("%d", &x);
        int c[x];
        for (i = 0; i < x; i++) {
            scanf("%d", &c[i]);
        }
        for (i = 0; i < x - 1; i++) {
            for (int j = 0; j < x - i - 1; j++) {
                if (c[j] > c[j + 1]) {
                    int temp = c[j];
                    c[j] = c[j + 1];
                    c[j + 1] = temp;
                }
            }
        }
        tot = 0;
        for (i = 0; i < x / 2; i++) { 
            tot += abs(c[x - i - 1] - c[i]); 
        }

        printf("%d\n", tot);
    }

    return 0;
}
