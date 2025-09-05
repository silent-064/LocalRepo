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

void solve()
{
    ll n, q, m;  
    cin >> n >> q >> m;

    vector<ll> a(n + 2); 

    for (ll i = 1; i <= n; ++i) { 
        cin >> a[i];
    }

    vector<ll> diff(n + 3, 0);
    for (ll i = 0; i < q; ++i) { 
        ll l, r, d;
        cin >> l >> r >> d;
        diff[l] += d;
        if (r + 1 <= n) diff[r + 1] -= d;
    }

    ll cnt = 0;
    for (ll i = 1; i <= n; ++i) {
        cnt += diff[i];
        a[i] += cnt;
    }

    vector<ll> f(a.begin() + 1, a.begin() + n + 1);

    sort(f.rbegin(), f.rend());

    for (ll i = 0; i < m; ++i) { 
        ll c;
        cin >> c;
        cout << f[c - 1] << endl; 
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
}
