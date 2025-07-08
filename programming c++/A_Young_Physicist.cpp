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
    ll sum1 = 0, sum2 = 0, sum3 = 0;
    ll b, c, d;
    for (i = 0; i < a; i++) {
        cin >> b >> c >> d;
        sum1 += b, sum2 += c, sum3 += d;
    }
    if (sum1 == 0 && sum2 == 0 && sum3 == 0)
        yes;
    else
        no;
}