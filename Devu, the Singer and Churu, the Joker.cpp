/*
 * Author : Protic Prappo Durjoy
 * Date :19/4/25
 */
#include <bits/stdc++.h>
#define endl "\n"
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define ft float
#define du double
#define ull unsigned long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, i;
    cin >> a;
    int x[a + 1];
    int joke = 0;
    int sum = 0;

    for (i = 1; i <= a; i++) {
        cin >> x[i];
        sum += x[i];
    }

    int breaku = (a - 1) * 10;
    int total = sum + breaku;

    if (total > b) {
        cout << -1;
    } else {
        joke += (a - 1) * 2;
        int rem = b - total;
        joke += (rem / 5);
        cout << joke;
    }

    return 0;
}