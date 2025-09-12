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
    int a, i;
    cin >> a;
    ll cnt=0;
    ll maxu=0,ans=0;
    while (a--)
    {
ll b;
cin>>b;

if(b>=maxu)
{
    cnt++;
    maxu=max(b,maxu);
}
else{
    maxu=0;
maxu=max(b,maxu);
cnt=1;
}
ans=max(ans,cnt);
    }
    cout<<ans;
}