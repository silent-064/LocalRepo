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
    int a, i = 0;
    cin >> a;
    ll tn = 0;
    while (a != tn && a > tn) {
        tn = (i * (i + 1)) / 2;
        i++;
    }
    if (tn == a)
        yes;
    else
        no;
}