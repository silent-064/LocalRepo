#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    
    while (t--) {
        scanf("%d", &n);
        int size = 2 * n;
        
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                printf(((i / 2 + j / 2) % 2 == 0) ? "#" : ".");
            }
            printf("\n");
        }
    }
    
    return 0;
}
