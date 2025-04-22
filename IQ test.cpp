/*
 * Author : Protic Prappo Durjoy
 * Date :22/4/25
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
    int x;
    int odd = 0, even = 0;
    int odd_p, even_p;
    for (i = 1; i <= a; i++) {
        cin >> x;
        if (x % 2 == 0) {
            even++;
            even_p = i;
        } else {
            odd++;
            odd_p = i;
        }
    }

    if (odd > 1) {
        cout << even_p;
    } else if (even > 1) {
        cout << odd_p;
    }

    return 0;
}