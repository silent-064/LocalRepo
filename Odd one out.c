#include <stdio.h>

int main() {
    int a, i;
    scanf("%d", &a);
    
    for (i = 0; i < a; i++) {
        int x, y, z;
        scanf("%d %d %d", &x, &y, &z);
        
       
        if (x == y) {
            printf("%d\n", z);
        } else if (x == z) {
            printf("%d\n", y);
        } else {
            printf("%d\n", x);
        }
    }

    return 0;
}
