#include <stdio.h>

int main() {
    long long a;
    double b;
    scanf("%lld %lf", &a, &b);
    long long c = (long long)(b * 100 + 0.5);
    long long result = (a * c) / 100;
    printf("%lld\n", result);

    return 0;
}
