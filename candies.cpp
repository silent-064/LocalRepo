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
        ull b;
        cin >> b;
        for (i = 2;; i++) {
            ull x = (1LL << i) - 1;
            if (b % x == 0) {
                cout << b / x << endl;
                break;
            }
        }
    }

    return 0;
}