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

    int a, b, i;
    ll noc = 1;

    while (true) {
        cin >> a >> b;
        if (a == 0 && b == 0) break;

        vector<ll> x(a);
        for (i = 0; i < a; i++) cin >> x[i];

        vector<ll> y(b);
        for (i = 0; i < b; i++) cin >> y[i];

        sort(x.begin(), x.end());

        map<ll, ll> pos;
        for (i = 0; i < a; i++) {
            if (pos.find(x[i]) == pos.end()) {
                pos[x[i]] = i + 1;
            }
        }

        cout << "CASE# " << noc++ << ":\n";
        for (i = 0; i < b; i++) {
            if (pos.find(y[i]) != pos.end()) {
                cout << y[i] << " found at " << pos[y[i]] << endl;
            } else {
                cout << y[i] << " not found" << endl;
            }
        }
    }
    return 0;
}
