/*
 * Author : Protic Prappo Durjoy
 * Date :16/6/25
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
    map<string, int> m1;
    string s1;
    for (i = 0; i < a; i++) {
        cin >> s1;
        m1[s1]++;
    }
    int maxu = 0;
    string nm;
    for (auto it : m1) {
        if (it.second > maxu) {
            maxu = it.second;
            nm = it.first;
        }
    }
    cout << nm;
}