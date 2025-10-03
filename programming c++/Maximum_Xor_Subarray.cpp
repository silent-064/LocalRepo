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
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    ll maxu = 0;
    set<ll> x;
    for (i = 0; i < a; i++) {
        ll y;
        cin >> y;
        maxu = max(maxu, y);
        x.insert(y);
    }
    ll sum = 0;
    for (auto it : x) {
        sum ^= it;
        maxu = max(sum, maxu);
    }
    cout << maxu << endl;
}