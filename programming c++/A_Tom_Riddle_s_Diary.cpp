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
    map<string, bool> m;
    for (i = 0; i < a; i++) {
        string s1;
        cin >> s1;
        if (m[s1]) {
            yes;
        } else {
            no;
            m[s1] = true;
        }
    }
}