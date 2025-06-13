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
        int x;
        cin >> x;

        vector<vector<int>> v;
        v.push_back({1, 1, x});

        for (int i = 2; i <= x; ++i) {
            int a = x - i + 1;
            int b = a + 1;

            v.push_back({i, 1, a});
            if (b <= x) v.push_back({i, b, x});
        }

        cout << v.size() << endl;
        for (auto &it : v) {
            cout << it[0] << " " << it[1] << " " << it[2] << endl;
        }
    }
}