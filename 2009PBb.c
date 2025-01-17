#include <stdio.h>

int main() {
    int t, n;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n); 
        char sh[n][5]; 
        
        for (int i = 0; i < n; i++) {
            scanf("%s", sh[i]); 
        }

        
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < 4; j++) {
                if (sh[i][j] == '#') {
                    printf("%d ", j + 1); 
                    break;
                }
            }
        }
        printf("\n"); 
    }
    
    return 0;
}
