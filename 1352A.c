#include<stdio.h>
int main()
{
    int a, x, i;
    scanf("%d", &a);  
    while (a--) {
        scanf("%d", &x);  
        int power = 1;
        int round_value[5];  
        int count = 0;

       
        while (x > 0) {
            int digit = x % 10;
            if (digit > 0) {
                round_value[count++] = digit * power;  
            }
            x /= 10;
            power *= 10;  
        }

       
        printf("%d\n", count);
        for (i = count - 1; i >= 0; i--) {  
            printf("%d ", round_value[i]);
        }
        printf("\n");
    }

    return 0;
}
