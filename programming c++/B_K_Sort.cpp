/*
 * Author : Protic Prappo Durjoy
 * Date :14/6/25
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
    int b;
    cin >> b;
    while (b--) {
        int a, i;
        cin >> a;
        vector<ll> x(a);
        for (i = 0; i < a; i++) {
            cin >> x[i];
            
        }

        ll maxu = 0;
        ll sum = 0;
        ll temp = x[0];
        for (i = 1; i < a; i++) {
            if (temp > x[i]) {
                ll sum1 = temp - x[i];
                maxu = max(sum1, maxu);
                sum += sum1;
            }
            temp = max(temp, x[i]);
        }

        cout << sum + maxu << endl;
    }
}