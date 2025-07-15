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
    ll a, i, x, b, c, d, h;
    x = b = c = d = 0;
    cin >> a;

    for (i = 1; i <= a; i++) {
        cin >> h;
        if (h == 1) x++;
        if (h == 2) b++;
        if (h == 3) c++;
        if (h == 4) d++;
    }

    ll e = d;

    ll y = min(c, x);
    e += y;
    c -= y;
    x -= y;

    e += c;

    e += b / 2;
    b %= 2;

    if (b == 1) {
        e++;
        x -= 2;
    }

    if (x > 0) e += (x + 3) / 4;

    cout << e;
}