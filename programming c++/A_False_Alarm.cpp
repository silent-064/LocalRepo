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
        int b, c;
        cin >> b >> c;
        vector<int> x;
        for (i = 0; i < b; i++) {
            int y;
            cin >> y;
            x.push_back(y);
        }

        bool z = false;
        int l = b, r = -1;

        for (i = 0; i < b; i++) {
            if (x[i] == 1) {
                z = true;
                l = min(l, i);
                r = max(r, i);
            }
        }

        if (!z || r - l + 1 <= c)
            yes;
        else
            no;
    }

    return 0;
}
