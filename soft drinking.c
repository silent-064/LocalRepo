#include <stdio.h>

int main() {
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int x= (k * l) / nl;  
    int a = c * d;          
    int t = p / np;         

    int min = x;
    if (a< min) {
        min = a;
    }
    if (t < min) {
        min = t;
    }
    printf("%d\n", min / n);

    return 0;
}
