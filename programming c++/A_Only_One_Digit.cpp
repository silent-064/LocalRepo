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
void solve() {
    ll b;
    cin >> b;
    ll minu = 9999999999;
    while (b > 0) {
        ll temp = b % 10;

        minu = min(minu, temp);

        b = b / 10;
    }
    cout << minu << endl;
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