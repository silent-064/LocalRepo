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
    vector<ll> x(a);
    for (i = 0; i < a; i++) {
        cin >> x[i];
    }
    ll temp = x[0];
    ll cnt = 0, sum = 0;
    for (i = 1; i < a; i++) {
        if (temp <= x[i]) {
            temp = x[i];
            continue;
        }
        if (temp > x[i]) {
            cnt = abs(temp - x[i]);
            temp = x[i] + cnt;
        }
        sum += cnt;
    }
    cout << sum;
}