#include <bits/stdc++.h>
using namespace std; 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long k;
    if (!(cin >> n >> k)) return 0;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    if (k == 0) { // safety: problem normally guarantees k>0
        cout << 0 << "\n";
        return 0;
    }

    unordered_map<int, long long> freq;
    freq[0] = 1;
    long long pref = 0, ans = 0;
    for (long long x : a) {
        pref += x;
        int r = (int)((pref % k + k) % k);
        ans += freq[r];
        freq[r]++;
    }

    cout << ans << "\n";
    return 0;
}