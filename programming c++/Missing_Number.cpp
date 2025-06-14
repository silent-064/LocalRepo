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
    vector<ll> x(a);
    for (i = 1; i <= a; i++) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    if (x[1] == 2) {
        cout << 1;
        return 0;
    }
    for (i = 1; i <= a; i++) {
        if (x[i] != i) {
            cout << i;
            return 0;
        }
    }
}