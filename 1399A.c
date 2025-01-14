#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);  // টেস্ট কেস সংখ্যা

    while (t--) {
        int n, i, j;
        scanf("%d", &n);
        int a[n];

        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);  // অ্যারের ইনপুট
        }

        // সর্টিং (বাবল সর্ট)
        for (i = 0; i < n - 1; i++) {
            for (j = 0; j < n - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

        // শর্ত চেক করা
        int possible = 1;  // ধরে নিচ্ছি এটি সম্ভব
        for (i = 1; i < n; i++) {
            if (a[i] - a[i - 1] > 1) {  // পার্থক্য ১-এর বেশি হলে
                possible = 0;
                break;
            }
        }

        // আউটপুট প্রিন্ট
        if (possible) 
            printf("YES\n");
        else 
            printf("NO\n");
    }

    return 0;
}
