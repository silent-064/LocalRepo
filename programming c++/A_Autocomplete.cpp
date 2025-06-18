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
    string s1;
    cin >> s1 >> a;
    vector<string> x(a);
    for (i = 0; i < a; i++) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int cnt = 0;
    for (auto it : x) {
        if (it.find(s1) == 0) {
            cout << it << endl;
            cnt++;
            break;
        }
    }
    if (cnt == 0) cout << s1 << endl;
}