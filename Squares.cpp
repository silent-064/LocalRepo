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
    int a, b, i;
    cin >> a >> b;
    int x[a + 1], y[a + 1];
    for (i = 0; i < a; i++) {
        cin >> x[i];
        y[i] = x[i];
    }
    sort(y, y + a);
    int xis, yis;
    int some = a - b;
    if (some >= 0) {
        for (i = some; i < a; i++) {
            xis = y[some];
            yis = 0;
            cout << xis << " " << yis << endl;
            break;
        }
    } else {
        cout << -1;
    }

    return 0;
}