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
    int cnt = 1;
    int maxu = INT_MIN;
    int x[i];
    for (i = 0; i < a; i++) {
        cin >> x[i];
    }
    for (i = 0; i < a - 1; i++) {
        if (x[i] <= x[i + 1]) cnt++;
    }
    for (i = cnt; i < a; i++) {
        if (x[i] >= x[i + 1]) cnt++;
    }
    if (cnt == 1)
        cout << 1;
    else
        cout << cnt - 1;
}