#include <stdio.h>
#include <string.h>

void solve(char s[]) {
    if (strcmp(s, "abc") == 0 || 
        strcmp(s, "acb") == 0 || 
        strcmp(s, "bac") == 0 || 
        strcmp(s, "cba") == 0) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        char s[4];  
        scanf("%s", s);
        solve(s);
    }

    return 0;
}
