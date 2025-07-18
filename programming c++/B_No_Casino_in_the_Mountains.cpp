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
    while (a--) {
        ll b, c;
        cin >> b >> c;
        vector<ll> x(b);

        for (i = 0; i < b; i++) {
            cin >> x[i];
        }

        ll cnt = 0;
        i = 0;

        while (i <= b - c) {
            bool possible = true;

            for (int j = i; j < i + c; j++) {
                if (x[j] != 0) {
                    possible = false;
                    break;
                }
            }

            if (possible) {
                cnt++;
                i = i + c + 1;
            } else {
                i++;
            }
        }

        cout << cnt << endl;
    }
}
