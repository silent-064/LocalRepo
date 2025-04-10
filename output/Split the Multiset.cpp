/*
 * Author : Protic Prappo Durjoy
 * Date :4/10/25
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a;
    cin >> a;
    while (a--) {
        int u, k;
        cin >> u >> k;
        if (u == 1) {
            cout << 0 << endl;
            continue;
        }
        int x = (u - 1 + k - 2) / (k - 1);
        cout << x << endl;
    }

    return 0;
}