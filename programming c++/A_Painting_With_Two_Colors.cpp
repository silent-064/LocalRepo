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
#define ull unsigned long long
#define ll long long
const ll INF = 1e9 + 7;
const ll mod = 998244353;
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;
    cin >> a;
    while (a--)
    {
        ll b, c, d; // b = n, c = red d= blue
        cin >> b >> c >> d;

        if ((b % 2) != (d % 2)) {
            no;
        } else if ((c <= d)||((b % 2) == (c % 2))) {
            yes;
        } //else if () {
            //yes;
         else {
            no;
        }
    }
}
