#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); 

    while (t--) {
        char grid[3][4]; 
        int row, col; 

        
        for (int i = 0; i < 3; i++) {
            scanf("%s", grid[i]);
            for (int j = 0; j < 3; j++) {
                if (grid[i][j] == '?') {
                    row = i;
                    col = j;
                }
            }
        }

        
        if (grid[row][0] != 'A' && grid[row][1] != 'A' && grid[row][2] != 'A') {
            grid[row][col] = 'A';
        } else if (grid[row][0] != 'B' && grid[row][1] != 'B' && grid[row][2] != 'B') {
            grid[row][col] = 'B';
        } else {
            grid[row][col] = 'C';
        }

        
        printf("%c\n", grid[row][col]);
    }

    return 0;
}
