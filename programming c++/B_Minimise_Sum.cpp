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
        ll b;
        cin >> b;
        vector<ll> x(b);
        for (i = 0; i < b; i++) {
            cin >> x[i];
        }
        ll sum = x[0] + min(x[0], x[1]);
        cout << sum << endl;
    }
}