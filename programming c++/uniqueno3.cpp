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

void updatesum(vector<ll>& sumarr, ll it)
{
    for (ll i = 0; i < 64; i++)
    {
        ll ithbit = it & (1LL << i);
        if (ithbit) sumarr[i]++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a;
    cin >> a;
    vector<ll> x(a);
    for (int i = 0; i < a; i++)
        cin >> x[i];

    vector<ll> sumarr(64, 0);

    // প্রতিটি সংখ্যার জন্য বিট কাউন্ট আপডেট
    for (ll it : x)
        updatesum(sumarr, it);

    // প্রতি বিটে mod 3 নিই
    for (int i = 0; i < 64; i++)
        sumarr[i] %= 3;

    // ফাইনাল নাম্বার বানানো
    ll num = 0;
    for (int i = 0; i < 64; i++)
    {
        if (sumarr[i] != 0)   // যেই বিটে remainder আছে, ওটাই আসল সংখ্যা
            num |= (1LL << i);
    }

    cout << num << endl;
    return 0;
}
