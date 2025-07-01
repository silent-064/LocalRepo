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
        ll n, j, k;
        cin >> n >> j >> k;
        vector<ll> x(n);
        for (i = 0; i < n; i++) {
            cin >> x[i];
        }

        j--;

        if (k >= 2) {
            yes;
        } else {
            int cnt = 0;
            for (i = 0; i < n; i++) {
                if (x[i] > x[j]) cnt++;
            }
            if (cnt == 0)
                yes;
            else
                no;
        }
    }
}
