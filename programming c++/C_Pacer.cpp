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
    ll b, i, c;
    cin >> b >> c;

    vector<ll> x(b + 1), y(b + 1);
    for (i = 1; i <= b; i++)
    {
        cin >>x[i]>>y[i];
    }
    ll cnt = 0, ans = 0;
    ll n = 0;

    for (i=1; i<=b; i++) {
        ll diff=x[i] - cnt;

        if (diff<0) {
            ans=-1;
            break;
        }

        if (n==y[i]) {
            if (diff % 2 == 0) {
                ans += diff;
            } else {
                ans += diff - 1;
            }
        }else{
            if(diff % 2 == 1) {  
                ans+=diff;
            }
            else {
                ans += diff - 1;
            }
        }

        cnt=x[i];
        n=y[i];
    }

    if (ans != -1) {
         ans += (c - cnt);
     }

    cout << ans << endl;
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
