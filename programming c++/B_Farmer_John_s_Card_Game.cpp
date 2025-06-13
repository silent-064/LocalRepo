/*
 * Author : Protic Prappo Durjoy
 * Date :
 * copy to copy..mone rakhar jonno
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ll long long
#define ull unsigned long long
using namespace std;
using vll = vector<ll>;
using ii = pair<ll, ll>;
using vii = vector<ii>;
void solve() {
    ll n, m;
    cin >> n >> m;
    vector<vll> ve(n, vll(m));
    vll p(n, -16);
    bool val = true;
    ll c = 0;
    for (vll &we : ve) {
        for (ll &i : we) cin >> i;
        ll minN = *min_element(we.begin(), we.end());
        if (minN < n) p[minN] = c++;
        val &= minN < n;
        sort(we.begin(), we.end());
        ll last = we[0] - n;
        for (ll i : we) {
            val &= last + n == i;
            last = i;
        }
    }
    if (!val) {
        cout << "-1\n";
        return;
    }
    for (ll i : p) cout << i + 1 << ' ';
    cout << '\n';
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