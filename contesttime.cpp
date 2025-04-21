/*
 * Author : Protic Prappo Durjoy
 * Date : 21/4/25
 * copy form silent-064 my main id
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
using namespace std;
void solve() {
    int b, i;
    cin >> b;
    int y;
    ;
    bool found[1000] = {false};
    int count = 0;
    for (i = 1; i <= b; i++) {
        cin >> y;
        if (!found[y]) {
            found[y] = true;
            count++;
        }
    }
    cout << count << endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, i;
    cin >> a;
    while (a--) {
        solve();
    }

    return 0;
}