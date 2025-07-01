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
    int a, i;
    cin >> a;
    while (a--) {
        ll b, c;
        cin >> b >> c;
        if (c % b != 0) {
            ll x = __gcd(b, c);
            ll y = (b * c) / x;
            cout << y << endl;
        } else {
            cout << (c * (c / b)) << endl;
        }
    }
}