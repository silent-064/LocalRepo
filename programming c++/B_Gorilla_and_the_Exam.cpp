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
        map<int, int> m1;
        for (i = 0; i < b; i++) {
            int x;
            cin >> x;
            m1[x]++;
        }
        vector<int> v;
        for (auto it : m1) {
            v.push_back(it.second);
        }
        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        stack<int> s1;
        for (auto it : v) {
            s1.push(it);
        }
        while (!s1.empty() && s1.top() <= c) {
            c -= s1.top();
            s1.pop();
        }
        int y = s1.size();
        cout << max(y, 1) << endl;
    }
}