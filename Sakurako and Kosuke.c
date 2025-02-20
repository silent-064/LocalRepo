#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        int n, x = 0, c = 1;
        scanf("%d", &n);

        while (-n <= x && x <= n) {
            if (c % 2 == 1) {
                x -= (2 * c - 1); 
            } else {
                x += (2 * c - 1); 
            }
            c++;
        }

        if (c % 2 == 0) {
            printf("Sakurako\n");
        } else {
            printf("Kosuke\n");   
        }
    }

    return 0;
}
