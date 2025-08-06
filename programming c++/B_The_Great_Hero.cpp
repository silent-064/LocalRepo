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
        ll A, h, n;
        cin >> A >> h >> n;
        ll a1[n], h1[n];

        for (i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> h1[i];
        }

        ll total = 0;
        for (i = 0; i < n; i++) {
            ll time1 = (h1[i] + A - 1) / A;
            total += time1 * a1[i];
        }

        ll maxd = *max_element(a1, a1 + n);

        if (h > total - maxd) {
            yes;
        } else {
            no;
        }
    }
}
