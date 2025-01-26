#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x, y;
        scanf("%d %d", &x, &y);

        if (x < y) {
            printf("NO\n");  
            continue;
        }
        if ((x - (y - 1)) % 2 == 1) {
            printf("YES\n");
            for (int i = 1; i < y; i++) {
                printf("1 ");
            }
            printf("%d\n", x - (y - 1));
        }
        else if ((x - 2 * (y - 1)) % 2 == 0 && (x - 2 * (y - 1)) > 0) {
            printf("YES\n");
            for (int i = 1; i < y; i++) {
                printf("2 ");
            }
            printf("%d\n", x - 2 * (y - 1));
        }
       
        else {
            printf("NO\n");
        }
    }

    return 0;
}
