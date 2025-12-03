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
/* ---------- 1D PREFIX SUM ---------- */

// build 1D prefix
vector<ll> prefix1D(const vector<ll>& a) {
    ll n = a.size();
    vector<ll> pre(n + 1, 0);
    for (ll i = 1; i <= n; i++)
        pre[i] = pre[i - 1] + a[i - 1];
    return pre;
}

// query sum [l, r] (1-indexed)
ll query1D(const vector<ll>& pre, ll l, ll r) {
    return pre[r] - pre[l - 1];
}

/* ---------- 2D PREFIX SUM ---------- */

// build 2D prefix
vector<vector<ll>> prefix2D(const vector<vector<ll>>& a) {
    ll n = a.size(), m = a[0].size();
    vector<vector<ll>> pre(n + 1, vector<ll>(m + 1, 0));

    for (ll i = 1; i <= n; i++) {
        for (ll j = 1; j <= m; j++) {
            pre[i][j] = a[i-1][j-1]
                      + pre[i-1][j]
                      + pre[i][j-1]
                      - pre[i-1][j-1];
        }
    }
    return pre;
}

// query submatrix sum (x1,y1 → x2,y2)
ll query2D(const vector<vector<ll>>& pre,
           ll x1, ll y1, ll x2, ll y2) {
    return pre[x2][y2]
         - pre[x1-1][y2]
         - pre[x2][y1-1]
         + pre[x1-1][y1-1];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    while (a--)
    {





    }
}