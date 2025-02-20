#include <stdio.h>
#include <string.h>

int main() {
    int a;
    scanf("%d", &a);
    
    while (a--) {
        char sh[101];
        scanf("%s", sh);
        
        int len = strlen(sh);
        int count = 0;  
        
        for (int i = 0; i < len - 1; i++) {
            if (sh[i] == sh[i + 1]) {
                count++;  
            }
        }
        
        printf("%d\n", len - count);
    }
    
    return 0;
}
