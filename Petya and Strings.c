#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char ch[101], sh[101];
    scanf("%s %s", ch, sh);

    int length = strlen(ch);
    int i;

    for (i = 0; i < length; i++) {
        char c1 = tolower(ch[i]); 
        char c2 = tolower(sh[i]);  
        if (c1 < c2) {
            printf("-1\n");
            return 0;
        } else if (c1 > c2) {
            printf("1\n");
            return 0;
        }
    }

    printf("0\n"); 
    return 0;
}
