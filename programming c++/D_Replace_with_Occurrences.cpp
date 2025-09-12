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

void solve() {
    ll n, b, i, j, k;
    cin >> n;
    vector<ll> x(n);
    for (i = 0; i < n; i++) cin >> x[i];

    vector<vector<ll>> pos(n + 1);
    for (i = 0; i < n; i++) pos[x[i]].push_back(i);

    bool ok = true;
    for (i = 1; i <= n; i++) {
        if (pos[i].size() % i != 0) {
            ok = false;
            break;
        }
    }

    if (!ok) {
        cout << -1 << endl;
        return;
    }

    vector<ll> a(n);
    ll l = 1;
    for (ll v = 1; v <= n; v++) {
        ll m = pos[v].size();
        for (i = 0; i < m; i += v) {
            for (j = 0; j < v; j++) {
                a[pos[v][i + j]] = l;
            }
            l++;
        }
    }

    for (i = 0; i < n; i++) {
        cout << a[i]<<" ";
    }
    cout<<endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, i;
    cin >> a;
    while (a--) {
        solve();
    }
}
