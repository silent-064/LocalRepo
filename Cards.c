#include <stdio.h>

int main() {
    int a, i;
    scanf("%d", &a);
    
    char ch[a + 1];
    scanf("%s", ch); 

    int count_z = 0, count_o = 0, count_n = 0, count_e = 0, count_r = 0;

    for (i = 0; i < a; i++) {
        if (ch[i] == 'o') count_o++;
        if (ch[i] == 'n') count_n++;
        if (ch[i] == 'e') count_e++;
        if (ch[i] == 'z') count_z++;
        if (ch[i] == 'r') count_r++;
    }

    int ones = count_o;
    if (count_n < ones) ones = count_n;
    if (count_e < ones) ones = count_e;

 
    int zeros = count_z;
    if (count_e < zeros) zeros = count_e;
    if (count_r < zeros) zeros = count_r;
    if (count_o < zeros) zeros = count_o;

   
    for (i = 0; i < ones; i++) {
        printf("1 ");
    }

 
    for (i = 0; i < zeros; i++) {
        printf("0 ");
    }

    printf("\n"); 

    return 0;
}
