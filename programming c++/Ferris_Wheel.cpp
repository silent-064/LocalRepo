/*
 * Author : Protic Prappo Durjoy
 * Date :7/6/25
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
    ll a, b;

    cin >> a >> b;
    ll sum = 0;
    ll count = 0;
    vector<ll> store;
    for (int i = 0; i < a; i++) {
        ll x;
        cin >> x;
        store.push_back(x);
    }
    sort(store.begin(), store.end());
    int n = 0, j = a - 1;
    while (n <= j) {
        if (store[n] + store[j] <= b) {
            n++;
            j--;
        } else {
            j--;
        }
        count++;
    }
    cout << count << endl;
}