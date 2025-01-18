#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int count = 0, disc = 0;  
        
        char str[6];  
        scanf("%s", str);  

      
        for (int i = 0; i < 5; i++) {
            if (str[i] == 'A') count++;
            else if (str[i] == 'B') disc++;
        }

       
        if (count > disc) printf("A\n");
        else printf("B\n");
    }
    
    return 0;
}
