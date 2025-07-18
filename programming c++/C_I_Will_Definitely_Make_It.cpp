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
        int b, k;
        cin >> b >> k;
        vector<ll> h(b);
        for (i = 0; i < b; i++) {
            cin >> h[i];
        }

        ll hk = h[k - 1];
        ll Hmax = *max_element(h.begin(), h.end());

        if (hk == Hmax) {
            yes;
            continue;
        }

        set<ll> s(h.begin(), h.end());
        vector<ll> v(s.begin(), s.end());

        ll pos = 0;
        while (pos < v.size() && v[pos] < hk) pos++;

        bool ok = true;
        for (ll i = pos; i + 1 < v.size(); i++) {
            if (v[i + 1] - v[i] > hk) {
                ok = false;
                break;
            }
        }

        if (ok)
            yes;
        else
            no;
    }
}