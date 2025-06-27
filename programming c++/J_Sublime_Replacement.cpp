
// just copy from solution for just try..
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ll long long
#define ull unsigned long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++) cin >> a[i];

        ll curr_sum = 0, max_sum = 0, last = 0;
        ll count_neg = 0;

        for (ll i = 0; i < n; i++) {
            if (a[i] == -1) {
                count_neg++;
                max_sum = max(max_sum, curr_sum + count_neg * 1000000000);
            } else {
                if (count_neg == 0) {
                    if (curr_sum == 0)
                        curr_sum = a[i];
                    else if (last <= a[i])
                        curr_sum += a[i];
                    else
                        curr_sum = a[i];
                } else {
                    if (last <= a[i]) {
                        curr_sum += count_neg * a[i] + a[i];
                    } else {
                        curr_sum = count_neg * a[i] + a[i];
                    }
                    count_neg = 0;
                }
                max_sum = max(max_sum, curr_sum);
                last = a[i];
            }
        }

        if (count_neg > 0) {
            max_sum = max(max_sum, curr_sum + count_neg * 1000000000);
        }

        cout << max_sum << "\n";
    }

    return 0;
}
