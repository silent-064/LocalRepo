#include<stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    
    while(a--) {
        int x, i, j;
        scanf("%d", &x);
        
        char sh[x][x];
        for(i = 0; i < x; i++) {
            scanf("%s", sh[i]);  
        }
        int row_start = -1, row_end = -1, col_start = -1, col_end = -1;
        for(i = 0; i < x; i++) {
            for(j = 0; j < x; j++) {
                if(sh[i][j] == '1') {
                    if(row_start == -1) row_start = i;
                    row_end = i; 
                    if(col_start == -1 || j < col_start) col_start = j; 
                    if(col_end == -1 || j > col_end) col_end = j; 
                }
            }
        }
        int height = row_end - row_start + 1;
        int width = col_end - col_start + 1;
        if(height == width) {
            printf("SQUARE\n");
        } else {
            printf("TRIANGLE\n");
        }
    }
    
    return 0;
}
