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

    vector<ll> ans(a, 0); 

    ans[0] = 0;
    ans[1] = abs(x[1] - x[0]);

    for (i = 2; i < a; i++) {
        ll step1 = ans[i - 1] + abs(x[i] - x[i - 1]);
        ll step2 = ans[i - 2] + abs(x[i] - x[i - 2]);
        if (step1 < step2) {
            ans[i] = step1;
        } else {
            ans[i] = step2;
        }
    }

    cout << ans[a - 1] << endl;
}
