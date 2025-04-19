/*
 * Author : Protic Prappo Durjoy
 * Date : 19/4/25
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
using namespace std;
void solve() {
    int a, i;
    cin >> a;
    while (a--) {
        int b, c;
        cin >> b >> c;

        vector<int> l(b), r(b), e(b, 0);
        ull sum = 0;

        for (i = 0; i < b; ++i) {
            cin >> l[i];
        }

        for (i = 0; i < b; ++i) {
            cin >> r[i];
        }

        for (int i = 0; i < b; ++i) {
            if (l[i] >= r[i]) {
                sum += l[i];
                e[i] = r[i];
            } else {
                sum += r[i];
                e[i] = l[i];
            }
        }

        sort(e.begin(), e.end(), greater<int>());

        ull ov = 0;
        for (i = 0; i < c - 1; ++i) {
            ov += e[i];
        }

        ull x = sum + ov + 1;
        cout << x << endl;
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();

    return 0;
}
