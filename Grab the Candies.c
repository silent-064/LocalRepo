#include <stdio.h>

int main() {
    int a, i;
    scanf("%d", &a);

    while (a--) {
        int x, count = 0, disc = 0;
        scanf("%d", &x);
        int z[x];

        for (i = 0; i < x; i++) {
            scanf("%d", &z[i]);

            if (z[i] % 2 == 0) {  
                count=count+z[i];
            } else {
                disc=disc+z[i];
            }
        }

        int ans = count - disc;
        if (ans >0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
