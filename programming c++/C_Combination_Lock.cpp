/*
 * Author : Protic Prappo Durjoy
 * Date :9/6/25
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
    int b;

    while (a--) {
        cin >> b;
        if (b % 2 == 0) {
            cout << -1 << endl;
        }

        else {
            for (i = b; i > 0; i--) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}
