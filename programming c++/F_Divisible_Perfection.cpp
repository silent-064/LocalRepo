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
#define ll long long
#define ull unsigned long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll a, i;
    cin >> a;

    while (a--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;

        bool ok = 1;
        for (ll len = 2; len <= 10 && len <= n; len++) {
            for (i = 0; i + len <= n; i++) {
                string sub = s.substr(i, len);
                ll num = stoll(sub);
                if (num % len != 0) {
                    ok = 0;
                    break;
                }
            }
            if (!ok) break;
        }

        if (ok)
            yes;
        else
            no;
    }

    return 0;
}