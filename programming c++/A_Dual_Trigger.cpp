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
        ll b;
        cin >> b;
        string s1;
        cin >> s1;

        ll cnt = 0;
        ll x = 0;

        for (i = 0; i < b; i++) {
            if (s1[i] == '1') {
                cnt++;
                x = i;
            }
        }

        if ((cnt % 2 != 0) || (cnt == 2 && s1[x] == s1[x - 1]))
            no;
        else
            yes;
    }
}
