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
    int a, i, count = 0, uncount = 0;
    cin >> a;
    vector<pair<int, int>> st1(a);
    for (i = 0; i < a; i++) {
        cin >> st1[i].second >> st1[i].first;
    }
    sort(st1.begin(), st1.end());
    for (auto it : st1) {
        if (it.second >= uncount) {
            count++;
            uncount = it.first;
        }
    }
    cout << count << endl;
}