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
    int x[12], y[12];
    for (i = 0; i < 12; i++) {
        cin >> x[i];
        y[i] = x[i];
    }
    int ans = 0;
    int count = 0;
    sort(y, y + 12, greater<int>());
    if (a == 0) {
        cout << 0;
    } else {
        for (i = 0; i < 12; i++) {
            ans += y[i];
            count++;
            if (ans >= a) {
                break;
            }
        }
        if (ans >= a)
            cout << count;
        else if (ans < a)
            cout << -1;
    }

    return 0;
}