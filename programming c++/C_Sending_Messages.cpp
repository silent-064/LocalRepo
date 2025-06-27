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
        long long n, f, a, b;
        cin >> n >> f >> a >> b;

        vector<long long> m(n + 1);
        m[0] = 0;
        for (int i = 1; i <= n; ++i) {
            cin >> m[i];
        }

        for (int i = 1; i <= n; ++i) {
            ll diff = m[i] - m[i - 1];
            f -= min(a * diff, b);
        }

        if (f > 0)
            yes;
        else
            no;
    }
}
