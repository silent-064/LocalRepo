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

bool solve(string &s) {
    ll i;
    ll n = s.size();
    for (i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            return (s[n - 1 - i] > s[i]);
        }
    }
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,i;
    cin >> a;
    while (a--)
    {
        ll b, c;
        cin >> b >> c;
        string s;
        cin >> s;

        if (b == 1) {
            no;
            continue;
        }

        string r = s;
        reverse(r.begin(), r.end());

        if (s < r) {
            yes; 
        } else {
            vector<ll> cnt(26, 0);
            for (char ch : s) cnt[ch - 'a']++;
            ll size = 0;
            for (ll val : cnt) if (val > 0) size++;

            if (size == 1 || c == 0) {
                no;
            } else {
                bool ok = solve(s);
                if (ok || c >= 1) yes;
                else no;
            }
        }
    }
}
