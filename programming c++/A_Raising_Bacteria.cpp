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
    ll a, i;
    cin >> a;
   ll ans = __builtin_popcountll(a);
    
   // while (a>0)
    // {
    //     ans+=(a&1);
    //     a>>=1;
    // }
    cout<<ans;
    // for(i=0; i<a; i++)
    // {
    //     if((a^i)>a)
    //     {
    //         cout<<i;
    //         break;
    //     }
    // }
}