#include <stdio.h>
#include <string.h>

int main() {
    int a, i, sum = 0;
    char ch[200][200]; 

    scanf("%d", &a);

    for (i = 0; i < a; i++) {
        scanf("%s", ch[i]);       
          if (strcmp(ch[i], "Tetrahedron") == 0) {
            sum += 4;
        } else if (strcmp(ch[i], "Cube") == 0) {
            sum += 6;
        } else if (strcmp(ch[i], "Octahedron") == 0) {
            sum += 8;
        } else if (strcmp(ch[i], "Dodecahedron") == 0) {
            sum += 12;
        } else if (strcmp(ch[i], "Icosahedron") == 0) {
            sum += 20;
        }
    }


    printf("%d\n", sum); 

    return 0;
}
