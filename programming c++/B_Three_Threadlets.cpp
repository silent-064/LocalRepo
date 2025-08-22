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
#define ull unsigned long long
#define ll long long
const ll INF = 1e9 + 7;
const ll mod = 998244353;
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    while (a--) {
        ll b, c, d, x, y, z;
        cin >> b >> c >> d;
        ll minu = INF;
        minu = min(b, c);
        minu = min(minu, d);
        x = b;
        y = c;
        z = d;
        ll cnt0 = 0, cnt1 = 0, cnt2 = 0, cnt3 = 0;
         cnt1 = x / minu;
        cnt2 = y / minu;
        cnt3 = z / minu;

        cnt0 = cnt1 + cnt2 + cnt3;
        bool ans = (cnt0 <= 6) && (x % minu == 0) && (y % minu == 0) && (z % minu == 0);

        if (ans)
            yes;
        else
            no;
    }
}
