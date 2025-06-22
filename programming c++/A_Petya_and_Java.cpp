/*
 * Author : Protic Prappo Durjoy
 * Date :21/6/25
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
    long double x;
    cin >> x;
    if (x <= 127)
        cout << "byte";
    else if (x <= 32767)
        cout << "short";
    else if (x <= 2147483647)
        cout << "int";
    else if (x <= 9223372036854775807)
        cout << "long";
    else
        cout << "BigInteger";
}