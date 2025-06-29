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
        ll b, c, d, e;
        cin >> b >> c >> d >> e;

        if (c < d || e < b) {
            cout << 1 << endl;
        } else {
            ll left = max(b, d);
            ll right = min(c, e);
            ll diff = right - left + 1 - 1;

            if (b != d) diff++;
            if (c != e) diff++;

            cout << diff << endl;
        }
    }

    return 0;
}
