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
    vector<ll> x(a);
    for (i = 0; i < a; i++) {
        cin >> x[i];
    }

    ll l = 0, r = a - 1;
    ll sereja = 0, dima = 0;

    for (i = 0; i < a; i++) {
        if (x[l] > x[r]) {
            if (i % 2 == 0) {
                sereja += x[l];
            } else {
                dima += x[l];
            }
            l++;
        } else {
            if (i % 2 == 0) {
                sereja += x[r];
            } else {
                dima += x[r];
            }
            r--;
        }
    }

    cout << sereja << " " << dima;
}
