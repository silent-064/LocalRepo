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
        if (b == 1)
            cout << c << endl;
        else {
            ll total = (b + c - 1) / c;
            c *= total;
            cout << (b + c - 1) / b << endl;
        }
    }
}