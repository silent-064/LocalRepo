/*
 * Author : Protic Prappo Durjoy
 * Date : 25/3/25
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
        int b;
        cin >> b;
        if (b == 1 || b == 3) {
            cout << "-1" << endl;
        } else if (b % 2 == 0) {
            for (i = 0; i < b - 2; i++) {
                cout << "3";
            }
            cout << "66" << endl;
        } else {
            for (i = 0; i < b - 5; i++) {
                cout << "3";
            }
            cout << "36366" << endl;
        }
    }
    return 0;
}
