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
    ll x = a;
    cout << x << " ";
    while (x != 1) {
        if (x % 2 == 0) {
            x /= 2;
            cout << x << " ";
        } else {
            x = 3 * x + 1;
            cout << x << " ";
        }
    }
}