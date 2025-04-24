/*
 * Author : Protic Prappo Durjoy
 * Date :24/4/25
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
using namespace std;
void solve() {
    int b, c;
    cin >> b >> c;

    if (b == c) {
        for (int i = 0; i < b; ++i) {
            cout << i << " ";
        }
    } else {
        for (int i = 0; i < c; ++i) {
            cout << i << " ";
        }

        for (int i = c + 1; i < b; ++i) {
            cout << i << " ";
        }

        cout << c;
    }
    cout << "\n";
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

    return 0;
}