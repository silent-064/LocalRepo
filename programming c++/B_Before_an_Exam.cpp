/*
 * Author : Protic Prappo Durjoy
 * Date :7/625
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
int a, b, i, m, n;
int x[50], y[50];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> a >> b;

    for (i = 0; i < a; i++) {
        cin >> x[i] >> y[i];
        m += x[i];
        n += y[i];
    }
    if (b < m || n < b) {
        no;
        return 0;
    }

    yes;
    for (i = 0; i < a; i++) {
        cout << min(y[i], b - m + x[i]) << " ";
        b -= min(y[i], b - m + x[i]);
        m -= x[i];
    }
}