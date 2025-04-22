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
    string x;
    cin >> x;
    for (i = 0; i < a; i++) {
        cout << x[i];
        if (i % 2 && i < a - (a % 2) - 2) {
            cout << "-";
        }
    }
    return 0;
}