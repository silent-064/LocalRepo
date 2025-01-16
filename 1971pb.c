#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        char s[1000]; 
        scanf("%s", s); 

        int len = strlen(s);
        int same = 1; 
      
        for (int i = 1; i < len; i++) {
            if (s[i] != s[0]) {
                 char c = s[0];
                 s[0] = s[i] ;
                 s[i] = c ;
                same = 0; 
                break;
            }
        }

        if (same) {
            printf("NO\n");
        } else {
            printf("YES\n");

        
                    
                      

       printf("%s\n", s); 
        }
    }

    return 0;
}