/*
 * Author : Protic Prappo Durjoy
 * Date :11/04/25
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
    int a, i;
    cin >> a;
    while (a--) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        int y = p1 + p2 + p3;
        if (y % 2 != 0) {
            cout << -1 << endl;
            continue;
        }
        int p = max(0, p3 - p1 - p2);
        cout << (y - p) / 2 << endl;
    }

    return 0;
}