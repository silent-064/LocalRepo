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
        int b;
        cin >> b;
        vector<int> x(b);
        for (i = 0; i < b; i++) {
            cin >> x[i];
        }

        ll sum = 0;
        int mx = 0, cnt = 0;
        for (int i = 0; i < b; i++) {
            sum += x[i];
            mx = max(mx, x[i]);
            if (sum - mx == mx) cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
