#include <stdio.h>
int main() {
    long long N, M;
    scanf("%lld %lld", &N, &M);
    while (N >= 10,M >= 10){N = N % 10;M = M % 10;}
    printf("%lld\n", N + M);
    return 0;
}