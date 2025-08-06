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
        ll b, c;
        cin >> b >> c;
        vector<ll> x(b);
        ll sum = 0;
        ll cnt0 = 0, cnt1 = 0, cnt2 = 0;
        for (i = 0; i < b; i++) {
            cin >> x[i];
            sum += x[i];
            if (x[i] == 0)
                cnt0++;
            else if (x[i] == 1)
                cnt1++;
            else if (x[i] == 2)
                cnt2++;
        }
        if (sum > c || (c - sum) == 1) {
            while (cnt0 > 0) {
                cout << "0" << " ";
                cnt0--;
            }
            while (cnt2 > 0) {
                cout << "2" << " ";
                cnt2--;
            }
            while (cnt1 > 0) {
                cout << "1" << " ";
                cnt1--;
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
}