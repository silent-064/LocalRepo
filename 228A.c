#include <stdio.h>

int main() {
    int s[4]; 
    scanf("%d %d %d %d", &s[0], &s[1], &s[2], &s[3]);

    
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (s[i] > s[j]) {
                int temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }

    
    int unique = 1;
    for (int i = 1; i < 4; i++) {
        if (s[i] != s[i - 1]) {
            unique++;
        }
    }

    
    printf("%d\n", 4 - unique);

    return 0;
}
