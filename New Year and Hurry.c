#include<stdio.h>

int main() {
    int a, b, i, count = 0;
    scanf("%d %d", &a, &b);
    
    for (i = 1; i <= a; i++) {
        int x = 5 * i;
        if (b + x > 240) 
            break;
        count++;
        b += x; 
    }

    printf("%d\n", count);
    return 0;
}
