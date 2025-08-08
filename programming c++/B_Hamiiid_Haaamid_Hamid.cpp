
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
        c = c - 1;

        vector<char> ch(b);
        ll cnt = 0;

        for (i = 0; i < b; i++) {
            cin >> ch[i];
            if (ch[i] == '.') cnt++;
        }

        if (cnt == b) {
            cout << 1 << endl;
            continue;
        }

        ll cnt1 = -1, cnt2 = b;
        for (i = 0; i <= c; i++) {
            if (ch[i] == '#') cnt1 = i;
        }
        cnt1 = cnt1 + 2;

        for (i = c + 1; i < b; i++) {
            if (ch[i] == '#') {
                cnt2 = i;
                break;
            }
        }
        cnt2 = b - cnt2 + 1;

        ll bl = c + 1;
        ll br = b - c;

        ll ans = max(cnt1, cnt2);
        ans = min(ans, min(bl, br));

        cout << ans << endl;
    }
}
