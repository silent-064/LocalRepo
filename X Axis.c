#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    scanf("%d", &a); 

    while (a--) {
        int b, c, x, min, calc;
        scanf("%d %d %d", &b, &c, &x);
        if ((b >= c && b <= x) || (b <= c && b >= x)) {
            min= b;
        } else if ((c >= b && c <= x) || (c <= b && c >= x)) {
            min= c;
        } else {
            min= x;
        }
        calc = abs(min - b) + abs(min - c) + abs(min - x);

        printf("%d\n", calc);
    }

    return 0;
}
