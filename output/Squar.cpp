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
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    while (a--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        if (max(a, b) == max(c, d) && min(a, b) + min(c, d) == max(c, d)) {
            yes;
        } else {
            no;
        }
    }

    return 0;
}