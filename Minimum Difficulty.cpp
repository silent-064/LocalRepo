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
    int count;
    cin >> a;
    int x[a + 1];
    int maxu = INT_MIN;
    for (i = 0; i < a; i++) {
        cin >> x[i];
    }
    int minu = INT_MAX;
    for (i = 1; i < a; i++) {
        maxu = max(maxu, x[i] - x[i - 1]);
    }

    for (i = 1; i < a - 1; i++) {
        minu = min(minu, max(maxu, x[i + 1] - x[i - 1]));
    }

    cout << minu;

    return 0;
}