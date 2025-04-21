/*
 * Author : Protic Prappo Durjoy
 * Date :22/4/25
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
    int x[a + 1];
    set<int> s;
    for (i = 0; i < a; i++) {
        cin >> x[i];
        s.insert(x[i]);
    }
    if (s.size() >= 2) {
        int y = 2;
        auto it = s.begin();
        advance(it, y - 1);
        cout << *it;
    } else
        no;

    return 0;
}