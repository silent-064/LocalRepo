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
    int a, i, b, c;
    cin >> a;
    for (i = 0; i < 3; i++) {
        cin >> b >> c;
        if (a == b)
            a = c;
        else if (a == c)
            a = b;
    }
    cout << a << endl;
}