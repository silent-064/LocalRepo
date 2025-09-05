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

const int maxu = 200000;
vector<bool> isPrime(maxu + 1, true);

void solve() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= maxu; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= maxu; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    int a, i;
    cin >> a;
    while (a--)
    {
        ll b,i,j;
        cin >> b;
        vector<ll> a(b);  
        for (i = 0; i < b; i++) cin >> a[i];

        ll ans = -1;
        map<ll,int> mp;

        for (i = 0; i < b; i++) {
            map<ll,int> tmp;
            tmp[a[i]] = 1;

            for (auto it : mp) {
                ll g = it.first;
                int len = it.second;
                ll ng = __gcd(g, a[i]);
                if (tmp.find(ng) == tmp.end()) tmp[ng] = len + 1;
                else tmp[ng] = max(tmp[ng], len + 1);
            }

            mp = tmp;

            for (auto it : mp) {
                ll g = it.first;
                int len = it.second;
                if (g <= maxu && isPrime[g]) ans = max(ans, (ll)len);
            }
        }

        cout << ans << endl;
    }
}
