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
    ll b;
    cin >> b;
    if (b % 4 == 0 || b % 7 == 0 || b % 47 == 0)
        yes;
    else {
        ll temp = b;
        bool ans = true;
        while (temp > 0) {
            int x = temp % 10;
            if (x == 4 || x == 7) {
                temp = temp / 10;
            } else {
                ans = false;
                break;
            }
        }
        if (ans)
            yes;
        else
            no;
    }
}
