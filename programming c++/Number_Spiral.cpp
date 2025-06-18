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
        ll x, y;
        ll ans;
        cin >> x >> y;
        if (y > x) {
            if (y % 2 == 0) {
                ans = (y - 1) * (y - 1) + 1 + (x - 1);
            } else {
                ans = y * y - (x - 1);
            }
        } else {
            if (x % 2 == 1) {
                ans = (x - 1) * (x - 1) + 1 + (y - 1);
            } else {
                ans = x * x - (y - 1);
            }
        }
        cout << ans << endl;
    }
}