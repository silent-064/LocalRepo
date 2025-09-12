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
    ll b, c, i;
    cin >> b >> c;
    ll cnt = 1;
    for (i = 0; i <= b; i++) {
        cnt *= 2;
    }
    ll x = c, y = cnt - c;
    vector<ll> v;
    bool ans = true;
    while (ans) {
        if (x == y) {
            ans = false;
            continue;
        }
        if (x < y) {
            v.push_back(1); 
            x *= 2;
            y -= x/2;} 
        else {
            v.push_back(2);
            y *= 2;
            x -= y/2;
}

    }
    cout << v.size() << endl;
    reverse(v.begin(), v.end());
    for (i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
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