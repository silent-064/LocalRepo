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
        ll x, y, a, b, x1, y1, x2, y2;
        cin >> x >> y >> a >> b >> x1 >> y1 >> x2 >> y2;

        ll cnt = 0;

        if (x1 + a <= x2 && (x2 - x1 - a) % a == 0)
            cnt = 1;
        else if (x2 + a <= x1 && (x1 - x2 - a) % a == 0)
            cnt = 1;
        if (y1 + b <= y2 && (y2 - y1 - b) % b == 0)
            cnt = 1;
        else if (y2 + b <= y1 && (y1 - y2 - b) % b == 0)
            cnt = 1;

        if (cnt)
            yes;
        else
            no;
    }
}
