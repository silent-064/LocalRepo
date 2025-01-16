#include <stdio.h>

int main() {
    int n, i, score, best, worst, amazing_count = 0;

    scanf("%d", &n); 
    if (n == 0) {
        printf("0\n"); 
        return 0;
    }

    scanf("%d", &score); 
    best = worst = score; 

    for (i = 1; i < n; i++) {
        scanf("%d", &score);

        if (score > best) { 
            amazing_count++;
            best = score;
        } 
        else if (score < worst) {
            amazing_count++;
            worst = score;
        }
    }

    printf("%d\n", amazing_count); 
    return 0;
}
