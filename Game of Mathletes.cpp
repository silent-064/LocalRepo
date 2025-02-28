#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    while (a--) {
        unordered_map<int, int> freq;
        int b, k;
        cin >> b >> k;

        for (int i = 0; i < b; i++) {
            int j;
            cin >> j;
            freq[j]++;
        }

        int count = 0;
        for (int x = 1; x <= k / 2; x++) {
            if (x == k - x) {
                count += freq[x] / 2;
            } else {
                count += min(freq[x], freq[k - x]);
            }
        }

        cout << count << endl;
    }
    
    return 0;
}
