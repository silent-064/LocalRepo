/*
 * Author : Protic Prappo Durjoy
 * Date :18/4/25
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
    int x[a + 1], y[a + 1];
    for (i = 0; i < a; i++) {
        cin >> x[i];
        y[i] = x[i];
    }
    sort(y, y + a);
    for (i = 0; i < a; i++) {
        cout << y[i] << " ";
    }

    return 0;
}