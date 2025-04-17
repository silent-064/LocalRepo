/*
 * Author : Protic Prappo Durjoy
 * Date :17/4/25
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
    int a, i, b, solve = 0;
    cin >> a >> b;

    int c[b + 1], d[b + 1];

    for (i = 0; i < b; i++) {
        cin >> c[i] >> d[i];
    }
    for (i = 0; i < b - 1; i++) {
        for (int j = i + 1; j < b; j++) {
            if (d[i] < d[j]) {
                swap(d[i], d[j]);
                swap(c[i], c[j]);
            }
        }
    }
    for (i = 0; i < b && a > 0; i++) {
        int minu = min(a, c[i]);
        solve += minu * d[i];
        a -= minu;
    }
    cout << solve;
    return 0;
}