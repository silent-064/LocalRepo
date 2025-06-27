/*
 * Author : Protic Prappo Durjoy
 * Date :22/6/25
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
        ll a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        if ((a == c) && (a == e) && (a == b + d + f))
            yes;
        else if ((b == d) && (b == f) && (a + c + e == d))
            yes;
        else if ((a == c + e) && (d == f) && (a == f + b))
            yes;
        else if ((b == d + f) && (c == e) && (b == a + c))
            yes;
        else
            no;
    }
}