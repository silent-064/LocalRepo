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
#include <bits/stdc++.h>
using namespace std;
void solve() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    {
        ll big = max(a, b);
        ll sm = min(a, b);
        if (big > 2 * (sm + 1)) {
            cout << "NO\n";
            return;
        }
    }
    {
        ll x = c - a;
        ll y = d - b;
        ll big = max(x, y);
        ll sm = min(x, y);
        if (big > 2 * (sm + 1)) {
           no;
            return;
        }
    }

    yes;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a,i;
    cin>>a;
    while(a--)
    {
   solve();
    }
 
   
}