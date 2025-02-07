#include <stdio.h>

int main() {
    int t, n, i;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

        int ans = 0;
        for (i = 0; i < n / 2; i++) {
            ans += a[n - i - 1] - a[i];
        }

        printf("%d\n", ans);
    }

    return 0;
}
