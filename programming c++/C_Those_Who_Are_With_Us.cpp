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
    int a, i, j;
    cin >> a;
    while (a--) {
        int b, c;
        cin >> b >> c;
        ll arr[b][c];
        ll maxu = 0;
        map<ll, ll> mp, mp1, mp2;
        for (i = 0; i < b; i++) {
            for (j = 0; j < c; j++) {
                cin >> arr[i][j];
                maxu = max(maxu, arr[i][j]);
                mp[arr[i][j]]++;
            }
        }

        for (i = 0; i < b; i++) {
            ll total = 0;
            for (j = 0; j < c; j++) {
                if (maxu == arr[i][j]) total++;
            }
            mp1[i] = total;
        }

        for (j = 0; j < c; j++) {
            ll cnt = 0;
            for (i = 0; i < b; i++) {
                if (maxu == arr[i][j]) cnt++;
            }
            mp2[j] = cnt;
        }

        ll f = 0;
        for (i = 0; i < b; i++) {
            for (j = 0; j < c; j++) {
                ll ans = mp1[i] + mp2[j];
                if (arr[i][j] == maxu) {
                    ans--;
                }
                if (ans == mp[maxu]) {
                    f = 1;
                    break;
                }
            }
            if (f) {
                break;
            }
        }

        if (f) {
            cout << maxu - 1 << endl;
        } else {
            cout << maxu << endl;
        }
    }
}
