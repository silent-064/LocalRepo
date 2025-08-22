/*
 * Author : Protic Prappo Durjoy
 * Date :
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
#define ll long long
const ll INF = 1e9 + 7;
const ll mod = 998244353;
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i, j;
    cin >> a;
    while (a--) {
        ll n;
        cin >> n;
        vector<ll> x;
        ll ans = 10;

        for (i = 0; i <= 18; i++) {
            ll d = ans + 1;
            if (n % d == 0) x.push_back(n / d);
            if (i < 18) ans *= 10;
        }

        if (x.empty()) {
            cout << 0 << endl;
        } else {
            sort(x.begin(), x.end());
            cout << x.size() << endl;
            for (j = 0; j < x.size(); j++) {
                if (j) cout << ' ';
                cout << x[j];
            }
            cout << endl;
        }
    }
}