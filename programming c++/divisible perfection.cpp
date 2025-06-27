#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool ok = true;
        long long num = 0;
        for (int i = 0; i < n; i++) {
            num = num * 10 + (s[i] - '0');  // number টা build করলাম

            // substring length = 1 to i+1
            if ((num % (i + 1)) != 0) {
                ok = false;
                break;
            }

            // যেহেতু number বড় হবে, তাই num কে ছোট রাখতে হবে
            // আমরা শুধু শেষ (i+1) digit রাখলেই হবে, কারণ এর বেশি দরকার নাই
            if (i >= 3) {
                // max 3 digit রাখছি কারণ length 3 এর বেশি দরকার নাই practical divisibility check এর
                // জন্য num এর মধ্যে শেষ 3 digit রাখি
                num = num % 1000;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}
