/*
 * Author : Protic Prappo Durjoy
 * Date :6/6/25
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
    map<string, int> m;
    vector<string> order;
    int count = 1;
    for (i = 0; i < a; i++) {
        string s1;
        cin >> s1;

        if (m.find(s1) == m.end()) {
            cout << "OK" << endl;
        }

        else {
            cout << s1 << m[s1] << endl;
        }
        m[s1]++;
    }
    return 0;
}
