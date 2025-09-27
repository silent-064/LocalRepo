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

void overlaynumber(string s, ll x)
{
    ll j = 0;
    while (x > 0)
    {
        ll lastbit = x & 1;
        if (lastbit)  // শুধু যেই পজিশনে 1 আছে সেখানকার ক্যারেক্টার প্রিন্ট করবে
        {
            cout << s[j];
        }
        j++;
        x = x >> 1;
    }
    cout << endl;
}

void generateallsubstrings(string &sh)
{
    ll n = sh.size();
    for (ll i = 1; i < (1LL << n); i++) // সব non-empty substring এর জন্য
    {
        overlaynumber(sh, i);
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string ch;
    cin >> ch;

    generateallsubstrings(ch);

    return 0;
}
