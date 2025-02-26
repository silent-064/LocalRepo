#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;  
    scanf("%d", &a);
    
    while (a--) {
        int n, b, c;
        scanf("%d %d %d", &n, &b, &c); 
        
        if (abs(b) > n * c) {
            printf("-1\n");
        } else {
        
            int min = (abs(b) + c - 1) / c;
            printf("%d\n", min);
        }
    }
    
    return 0;
}
