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
    int b;

    while (a--) {
        cin >> b;

        if (b == 3) {
            cout << "2 3 1" << endl;
        } else {
            cout << "2 3 " << b << " ";
            for (i = 4; i <= b - 1; i++) {
                cout << i << " ";
            }
            cout << "1" << endl;
        }
    }
}
