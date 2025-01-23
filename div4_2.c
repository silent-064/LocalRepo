#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        int n;
        char s[51];
        scanf("%d", &n);
        scanf("%s", s);  

        int x = 0, y = 0; 
        int found = 0; 

        for (int i = 0; i < n; i++) {
            if (s[i] == 'L') x--;      
            else if (s[i] == 'R') x++; 
            else if (s[i] == 'U') y++; 
            else if (s[i] == 'D') y--; 

            if (x == 1 && y == 1) { 
                found = 1;
                break; 
            }
        }

        if (found) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
