/*
 * Author : Protic Prappo Durjoy
 * Date :13/6/25
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
    vector<int> x(a);
    for (i = 0; i < a; i++) {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    ll cost = 0;
    for (i = 0; i < a; i++) {
        cost += abs(x[i] - x[a / 2]);
    }
    cout << cost;
}