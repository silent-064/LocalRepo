/*
 * Author : Protic Prappo Durjoy
 * Date :17/6/25
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
        int b, c;
        cin >> b >> c;
        vector<int> x;
        for (i = 0; i < b; i++) {
            int y;
            cin >> y;
            x.push_back(y);
        }
        ll fnt = abs(c - x.front());
        ll bck = abs(c - x.back());
        ll ans = (x.back()) - (x.front());
        cout << ans + (min(fnt, bck)) << endl;
    }
}