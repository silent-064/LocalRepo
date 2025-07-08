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
    ll a, b, c, i;
    cin >> a >> b >> c;
    ll x, y, z, v;
    ll maxu = 0;
    x = a + (b * c);
    maxu = max(maxu, x);
    y = a * (b + c);
    maxu = max(maxu, y);
    z = a * b * c;
    maxu = max(maxu, z);
    v = (a + b) * c;
    maxu = max(maxu, v);

    cout << maxu;
}