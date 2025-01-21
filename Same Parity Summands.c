#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);
        
        if (n >= k && (n % 2 == k % 2)) {
            printf("YES\n");
            for (int i = 0; i < k - 1; i++) {
                printf("1 ");
            }
            printf("%d\n", n - (k - 1));
        } else if (n >= 2 * k) {
            printf("YES\n");
            for (int i = 0; i < k - 1; i++) {
                printf("2 ");
            }
            printf("%d\n", n - 2 * (k - 1));
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
