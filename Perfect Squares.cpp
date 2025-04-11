/*
 * Author : Protic Prappo Durjoy
 * Date :12/4/25
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
    int maxu = INT_MIN;
    int x[a + 1];
    for (i = 0; i < a; i++) {
        cin >> x[i];
    }

    for (i = 0; i < a; i++) {
        double s1 = sqrt(x[i]);
        int s12 = sqrt(x[i]);

        s12 = sqrt(x[i]);
        if (s1 != s12) {
            maxu = max(maxu, x[i]);
            continue;
        }
    }
    cout << maxu;

    return 0;
}