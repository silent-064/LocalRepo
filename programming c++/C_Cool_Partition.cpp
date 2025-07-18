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
        ll b;
        cin >> b;
        ll x[b];
        for (i = 0; i < b; i++) {
            cin >> x[i];
        }
        set<ll> all, freq;
        ll cnt = 0;
        for (i = 0; i < b; i++) {
            all.insert(x[i]);
            freq.insert(x[i]);
            if (all.size() == freq.size()) {
                cnt++;
                freq.clear();
            }
        }
        cout << cnt << endl;
    }
}