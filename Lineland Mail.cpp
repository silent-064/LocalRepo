/*
 * Author : Protic Prappo Durjoy
 * Date :19/4/25
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
    int x[a + 1];
    for (i = 0; i < a; i++) {
        cin >> x[i];
    }
    ull minu;
    ull maxu;
    for (i = 0; i < a; i++) {
        if (i == 0) {
            minu = abs(x[0] - x[1]);
            maxu = max(abs(x[a - 1] - x[0]), abs(x[0] - x[0]));
        } else if (i == a - 1) {
            minu = abs(x[a - 1] - x[a - 2]);
            maxu = max(abs(x[a - 1] - x[0]), abs(x[a - 1] - x[a - 1]));
        } else {
            minu = min(abs(x[i] - x[i - 1]), abs(x[i] - x[i + 1]));
            maxu = max(abs(x[i] - x[0]), abs(x[i] - x[a - 1]));
        }
        cout << minu << " " << maxu << endl;
    }

    return 0;
}