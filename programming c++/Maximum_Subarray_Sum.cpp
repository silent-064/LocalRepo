/*
 * Author : Protic Prappo Durjoy
 * Date :13/6/25
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
    ll a, i, j;
    cin >> a;
    vector<ll> v(a);
    for (i = 0; i < a; i++) {
        cin >> v[i];
    }
    ll sum = v[0];
    ll maxu = v[0];
    for (i = 1; i < a; i++) {
        sum = max(v[i], sum + v[i]);
        maxu = max(maxu, sum);
    }
    cout << maxu;
}