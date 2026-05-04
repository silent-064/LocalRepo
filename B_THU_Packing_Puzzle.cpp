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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n,i;
    cin >> n;
    while (n--)
    { 
        ll t,h,u,tu=0,tt=0,uu=0,th=0,hh=0,hu=0;
        cin>>t>>h>>u;

        ll ans=(t+h+u)*3;

        ll need;

        
        need=min(t,u);
        ans-=need*2;
        tu=need;
        t-=need;
        u-=need;

        
        need=min(t/2, h);
        ans-=need*2;
        th=need;
        t-=need*2;
        h-=need;

        
        need=min(t,h);
        ans-=need;
        hh=need;
        t-=need;
        h-=need;

    
        tt=max(0LL,t-1);
        ans-=tt;

        cout << ans << endl;
    }
}