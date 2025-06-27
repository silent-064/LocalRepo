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

    int a;
    cin >> a;
    while (a--) {
        int x, i;
        cin >> x;
        if (x < 2) {
            cout << -1 << endl;
        }
        ll y[x];
        for (i = 0; i < x; i++) {
            cin >> y[i];
        }

        bool sln = 0;
        for (i = 0; i < x - 1; i++) {
            if (abs(y[i] - y[i + 1]) <= 1) {
                sln = 1;
                break;
            }
        }

        if (sln) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    }

    return 0;
}
