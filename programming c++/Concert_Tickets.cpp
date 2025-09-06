ar/*
 * Author : Protic Prappo Durjoy
 * Date :8/6/25
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
    int a, b, i;
    cin >> a >> b;
    multiset<int> tkt;
    vector<int> mx;
    for (i = 0; i < a; i++) {
        int x;
        cin >> x;
        tkt.insert(x);
    }
    for (i = 0; i < b; i++) {
        int y;
        cin >> y;
        mx.push_back(y);  // 3 5 5 7 8-->3 4 8;
    }
    for (int i = 0; i < b; i++) {
        auto it = tkt.upper_bound(mx[i]);
        if (it == tkt.begin()) {
            cout << -1 << endl;
        } else {
            --it;
            cout << *it << endl;
            tkt.erase(it);
        }
    }
}