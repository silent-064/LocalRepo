#include <stdio.h>

int main() {
    int a, b, i, count;
    scanf("%d", &a);  

    while (a--) {
        int x[21] = {0};  
        count = 0;  

        scanf("%d", &b);  

        for (i = 0; i < b; i++) {
            int num;
            scanf("%d", &num);
            x[num]++;  
        }

        if (b == 1) {
            printf("0\n");
            continue;
        }

        for (i = 1; i <= b; i++) {
            count += x[i] / 2;  
        }

        printf("%d\n", count);
    }

    return 0;
}
