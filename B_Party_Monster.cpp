/*
 * Author  : Protic Prappo Durjoy
 * Platform: Codeforces
 * Problem : 
 * Date    :
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
bool solve() {
    ll n;
    string s;
    cin >> n >> s;

    int tb=0;
    for (char c:s) {
        if (c=='(') tb++;
        else tb--;
    }
    if (tb != 0) return false;

    ll l=0, b=0;
    while (l<n) {
        if (s[l]=='(') b++;
        else b--;
        if (b<0) break;
        l++;
    }

    if (l==n) return true;

    ll r=n-1;
    b=0;
    while (r>=0) {
        if (s[r]==')')b++;
        else b--;
        if (b<0) break;
        r--;
    }

    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,i;
    cin >> t;

    while (t--) {
        if (solve())yes;
        else no;
    }

}