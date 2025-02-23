#include <stdio.h>
#include <string.h>

int main() {
    char ch[1005]; 
    fgets(ch, sizeof(ch), stdin); 

    int freq[26] = {0}; 
    int count = 0;

    for (int i = 0; ch[i] != '\0'; i++) {
        if (ch[i] >= 'a' && ch[i] <= 'z') { 
            if (freq[ch[i] - 'a'] == 0) { 
                count++;
            }
            freq[ch[i] - 'a'] = 1; 
        }
    }

    printf("%d\n", count); 
    return 0;
}
